// ** In Servo Contlor ********************************************************************
void InServoContlor(){
  if(ServoInPoji == 1 && ServoInFlag == 1){                          // Main -> Sub へ 切替
    digitalWrite(Ser_In_Main, HIGH);                                 // Servo In Main Contlor OFF
    digitalWrite(Sig_In_M_GR,  LOW);                                 // Signal In Main Red
    delay(10);
    digitalWrite(Ser_In_Sub,   LOW);                                 // Servo In Sub  Contlor ON
    digitalWrite(Sig_In_S_GR, HIGH);                                 // Signal In Sub Green
    ServoInFlag = 0;                                                 // セット完了フラグ
    digitalWrite(ServoINT,     LOW);                                 // Servo切り替え割り込み（MEGAへ）
    delay(1);
    digitalWrite(ServoINT,    HIGH);                                 // Servo切り替え割り込み（MEGAへ）
    data[13] = ServoInPoji;
  }
  if(ServoInPoji == 2 && ServoInFlag == 0){                          // Sub -> Main へ 切替
    digitalWrite(Ser_In_Sub,  HIGH);                                 // Servo In Sub Contlor OFF
    digitalWrite(Sig_In_S_GR,  LOW);                                 // Signal In Sub Red
    delay(10);
    digitalWrite(Ser_In_Main,  LOW);                                 // Servo In Main  Contlor ON
    digitalWrite(Sig_In_M_GR, HIGH);                                 // Signal In Main Green
    ServoInFlag = 1;                                                 // セット完了フラグ
    digitalWrite(ServoINT,     LOW);                                 // Servo切り替え割り込み（MEGAへ）
    delay(1);
    digitalWrite(ServoINT,    HIGH);                                 // Servo切り替え割り込み（MEGAへ）
    data[13] = ServoInPoji;
  }
}
// ***************************************************************************************
