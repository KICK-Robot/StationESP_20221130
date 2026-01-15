// ** Servo Set ***************************************************************************
void S_Servo_set_Lib(){
  if((random_servo_time_sub <= random_servo_time_sub_set) && S_Priority_go_Flag==1 && S_Servo_go_Flag == 0) {    
    count_servo_sub_Flag = 1;                            // 乱数減算開始（1secごとの割り込みで減算）
    data[20] = random_servo_time_sub;                    // ＜2022/11/05追加＞
  }
  if((random_servo_time_sub == 0) && S_Priority_go_Flag==1 && S_Servo_go_Flag == 0){ // ＜2022/11/05追加＞  
    count_servo_sub_Flag = 0;                            // 乱数減算停止（1secごとの割り込みで減算）
    data[20] = 0;                                        // サーボ起動時間残がゼロ（起動開始）
    S_Servo_go = 1;                                      // 時間が来たのでSerevoをSub側に倒す
    ServoOutPoji = 1;                                    // OutServo制御（ Main:2 Sub:1 )
    OutServoContlor();
    S_Servo_go_Flag = 1;                                // 1回セット 
  }
}  

void M_Servo_set_Lib(){
  if((random_servo_time_main <= random_servo_time_main_set) && M_Priority_go_Flag==1 && M_Servo_go_Flag == 0){ // ＜2022/11/05追加＞  
    count_servo_main_Flag= 1;                            // カウント有効(1secごとの割り込みでカウント：乱数ー１）
    data[19] = random_servo_time_main;                   // 
  }
  if((random_servo_time_main == 0) && M_Priority_go_Flag==1 && M_Servo_go_Flag == 0){ // ＜2022/11/05追加＞  
    count_servo_main_Flag = 0;                           // 乱数減算停止
    data[19] = 0;
    M_Servo_go = 1;                                      // 時間が来たのでSerevoをMain側に倒す
    ServoOutPoji = 2;                                    // OutServo制御（ Main:2 Sub:1 )
    OutServoContlor();
    M_Servo_go_Flag = 1;                                // 1回セット
  }
}
// ** Servo Set END ***********************************************************************
