// ** setup **************************************************************************************************************
void setup() {
  Serial.begin(115200);
  Serial2.begin(1000000, SERIAL_8N1, 16,17);  // RX:16, TX:17  MEGA(RX:17, TX:16)
  
  // == ESP-NOW初期化 =====================================================================================================
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  if (esp_now_init() != ESP_OK) {
    ESP.restart();
  }
  // =====================================================================================================================
  
  // == マルチキャスト用Slave登録 ============================================================================================
  memset(&slave, 0, sizeof(slave));
  for (int i = 0; i < 6; ++i) {
    slave.peer_addr[i] = (uint8_t)0xff;
  }
  
  esp_err_t addStatus = esp_now_add_peer(&slave);
  if (addStatus == ESP_OK) {
  }
  // =====================================================================================================================
  
  // == ESP-NOWコールバック登録 =============================================================================================
  //esp_now_register_send_cb(OnDataSent);
  //esp_now_register_recv_cb(OnDataRecv);
  // =====================================================================================================================

  disableCore0WDT();                                                   // watchdog timer禁止
  disableCore1WDT();                                                   // watchdog timer禁止

  // ** サーボ、列車スタート時間管理用割り込み処理(1ms) *************************************************************************
  timer1 = timerBegin(0, 80, true);                                     //timer=1us
  timerAttachInterrupt(timer1, &timer1_count, true);
  timerAlarmWrite(timer1, 1000000, true);                               // 1secごとに割込み
  timerAlarmEnable(timer1);
  randomSeed(10);                                                      // 乱数の種となる数値を10secに指定
  //RandomTime = random(5000,30000);                                   //乱数の最小値を5000、最大値を30000に指定    
  // ************************************************************************************************************************
  // ** サーボ、列車スタート時間管理用割り込み処理(1ms) *************************************************************************
  timer2 = timerBegin(1, 80, true);                                     //timer=1us
  timerAttachInterrupt(timer2, &timer2_count, true);
  timerAlarmWrite(timer2, 1000000, true);                               // 1secごとに割込み
  timerAlarmEnable(timer2);
  randomSeed(10);                                                      // 乱数の種となる数値を10secに指定
  //RandomTime = random(5000,30000);                                   //乱数の最小値を5000、最大値を30000に指定    
  // ************************************************************************************************************************
  // ** サーボ、列車スタート時間管理用割り込み処理(1ms) *************************************************************************
  timer3 = timerBegin(2, 80, true);                                     //timer=1us
  timerAttachInterrupt(timer3, &timer3_count, true);
  timerAlarmWrite(timer3, 1050000, true);                               // 1secごとに割込み
  timerAlarmEnable(timer3);
  randomSeed(10);                                                      // 乱数の種となる数値を10secに指定
  //RandomTime = random(5000,30000);                                   //乱数の最小値を5000、最大値を30000に指定    
  // ************************************************************************************************************************
  // ** サーボ、列車スタート時間管理用割り込み処理(1ms) *************************************************************************
  timer4 = timerBegin(3, 80, true);                                     //timer=1us
  timerAttachInterrupt(timer4, &timer4_count, true);
  timerAlarmWrite(timer4, 950000, true);                               // 1secごとに割込み
  timerAlarmEnable(timer4);
  randomSeed(10);                                                      // 乱数の種となる数値を10secに指定
  //RandomTime = random(5000,30000);                                   //乱数の最小値を5000、最大値を30000に指定    
  // ************************************************************************************************************************

  pinMode(StartSW , INPUT_PULLUP);                                     // スタート押しボタンSW
  pinMode(Reset,    OUTPUT);                                           // Reset (ArduinoMEGA + ArduinoNANO)
  
  pinMode(Ser_In_Main,   OUTPUT);                                      // Servo In Main側移動指令
  pinMode(Ser_In_Sub,    OUTPUT);                                      // Servo In Sub側移動指令
  pinMode(Ser_Out_Main,  OUTPUT);                                      // Servo Out Main側移動指令
  pinMode(Ser_Out_Sub,   OUTPUT);                                      // Servo Out Sub側移動指令
  pinMode(Sig_In_M_GR,   OUTPUT);                                      // PointSingnal IN /Main/Green or Red
  pinMode(Sig_In_S_GR,   OUTPUT);                                      // PointSingnal IN /Sub /Green or Red
  pinMode(Sig_Out_M_GR,  OUTPUT);                                      // PointSingnal OUT/Main/Green or Red
  pinMode(Sig_Out_S_GR,  OUTPUT);                                      // PointSingnal OUT/Sub /Green or Red
  pinMode(ServoINT,      OUTPUT);                                      // ServoIn/Out状態変化情報割り込み（MEGA)<OK>

  digitalWrite(Ser_In_Main,  HIGH);                                    // In Servo => Main移動禁止
  digitalWrite(Ser_In_Sub,    LOW);                                    // In Servo => Subへ移動
  digitalWrite(Ser_Out_Main, HIGH);                                    // Out Servo => Main移動禁止
  digitalWrite(Ser_Out_Sub,   LOW);                                    // Out Servo => Subへ移動
  
  digitalWrite(Sig_In_S_GR,  HIGH);                                    // In Sub側信号をGreen点灯
  digitalWrite(Sig_Out_S_GR, HIGH);                                    // Out Sub側信号をGreen点灯
  
  digitalWrite(Reset,    LOW);                                         // Reset（LOWでReset）別バッファ経由でMEGA_reset,NANO_reset
  delay(500);
  digitalWrite(Reset,   HIGH);                                         // Reset（LOWでReset）別バッファ経由でMEGA_reset,NANO_reset

  Serial2.write("R");                                                  // MEGA_Resetコマンド
  delay(100);

  ServoInPoji  = 1;                                                    // 入口サーボをSubへ(Sub:1 Main:2)
  ServoOutPoji = 1;                                                    // 出口サーボをSubへ(Sub:1 Main:2)

  while(digitalRead(StartSW) == 1){}                                   // Start SW ON 待ち（HIGH-＞LOW）
  delay(100);
  
  Serial2.write("4");                                                  // 1=2ms 2=4ms 3=6ms 4=8ms（周期でMAGAからデータ出力）
  delay(100);
  
  Serial2.write("Z");                                                  // MEGA_Start
  delay(100);

  InServoContlor();                                                    // サーボを初期値へ（Sub優先）
  sel =0;                                                              // 入口サーボ配列カウンターを初期値に
}
// ** Setup END ***********************************************************************************************************
