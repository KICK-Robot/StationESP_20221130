// ** Train1/Poji06 *********************************************************************
void Train1_Funk06(){
  M_Servo_go_Flag  = 0;
  S_Servo_go_Flag  = 0;
  M_Train_go_Flag  = 0;
  S_Train_go_Flag  = 0;

  Sub_Timer_Flag  = 0;
  Main_Timer_Flag = 0;

  Train1_Funk22_Flag  = 0;                                   // Train1 Funk22 １回セットフラグ
  Train1_Funk32_Flag  = 0;                                   // Train1 Funk32　1回セットフラグ
  Train1_Sub_go_Flag  = 0;                                   // Subから列車スタート許可フラグ
  Train1_Main_go_Flag = 0;                                   // Mainから列車スタート許可フラグ

  //Train2_Funk22_Flag  = 0;                                 // Train1 Funk22 １回セットフラグ
  //Train2_Funk32_Flag  = 0;                                 // Train1 Funk32　1回セットフラグ
  //Train2_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train2_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ

  //Train3_Funk22_Flag  = 0;                                 // Train1 Funk22 １回セットフラグ
  //Train3_Funk32_Flag  = 0;                                 // Train1 Funk32　1回セットフラグ
  //Train3_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train3_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ

  //Train4_Funk22_Flag  = 0;                                 // Train1 Funk22 １回セットフラグ
  //Train4_Funk32_Flag  = 0;                                 // Train1 Funk32　1回セットフラグ
  //Train4_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train4_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ

  Priority_Select_Flag = 0;

  if(M_Priority_go_Flag==1){
    M_Priority_go_Flag = 0;
  }
  if(S_Priority_go_Flag==1){
    S_Priority_go_Flag = 0;
  }

  if(Train1==6 && (Train2==7 || Train3==7 || Train4==7))
  {
    data[1] = SpeedZero;                                     // Train1 停止
    data[2] = F1_L0;                                         // forward/Light Off
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }else if(Train1==6 && (Train2==8 || Train3==8 || Train4==8)){
    data[1] = SpeedZero;                                     // Train1 speed:Slow
    data[2] = F3_L0;                                         // forward/Light On
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }else if(Train1==6){
    data[1] = SpeedLow1_1;                                   // Train1 speed:中間速度
    data[2] = F3_L0;                                         // forward/Light On
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }
}
// ** Train1/Poji06 END *****************************************************************

// ** Train2/Poji06 *********************************************************************
void Train2_Funk06(){
  M_Servo_go_Flag  = 0;
  S_Servo_go_Flag  = 0;
  M_Train_go_Flag  = 0;
  S_Train_go_Flag  = 0;

  Sub_Timer_Flag  = 0;
  Main_Timer_Flag = 0;

  //Train1_Funk22_Flag  = 0;                                 // Train1 Funk22 １回セットフラグ
  //Train1_Funk32_Flag  = 0;                                 // Train1 Funk32　1回セットフラグ
  //Train1_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train1_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ
  Train2_Funk22_Flag  = 0;                                   // Train2 Funk22 １回セットフラグ
  Train2_Funk32_Flag  = 0;                                   // Train2 Funk32　1回セットフラグ
  Train2_Sub_go_Flag  = 0;                                   // Subから列車スタート許可フラグ
  Train2_Main_go_Flag = 0;                                   // Mainから列車スタート許可フラグ
  //Train3_Funk22_Flag  = 0;                                 // Train3 Funk22 １回セットフラグ
  //Train3_Funk32_Flag  = 0;                                 // Train3 Funk32　1回セットフラグ
  //Train4_Funk22_Flag  = 0;                                 // Train4 Funk22 １回セットフラグ
  //Train4_Funk32_Flag  = 0;                                 // Train4 Funk32　1回セットフラグ

  Priority_Select_Flag = 0;

  if(M_Priority_go_Flag==1){
    M_Priority_go_Flag = 0;
  }
  if(S_Priority_go_Flag==1){
    S_Priority_go_Flag = 0;
  }

  if(Train2==6 && (Train1==7 || Train3==7 || Train4==7))
  {
    data[3] = SpeedZero;                                     // Train2 停止
    data[4] = F1_L0;                                         // forward/Light Off
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }else if(Train2==6 && (Train1==8 || Train3==8 || Train4==8)){
    data[3] = SpeedZero;                                     // Train2 speed:Slow
    data[4] = F3_L0;                                         // forward/Light On
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }else if(Train2==6){
    data[3] = SpeedLow2_1;                                   // Train2 speed:中間速度
    data[4] = F3_L0;                                         // forward/Light On
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }
}
// ** Train2/Poji06 END *****************************************************************

// ** Train3/Poji06 *********************************************************************
void Train3_Funk06(){
  M_Servo_go_Flag  = 0;
  S_Servo_go_Flag  = 0;
  M_Train_go_Flag  = 0;
  S_Train_go_Flag  = 0;

  Sub_Timer_Flag  = 0;
  Main_Timer_Flag = 0;

  //Train1_Funk22_Flag  = 0;                                 // Train1 Funk22 １回セットフラグ
  //Train1_Funk32_Flag  = 0;                                 // Train1 Funk32　1回セットフラグ
  //Train1_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train1_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ
  //Train2_Funk22_Flag  = 0;                                 // Train2 Funk22 １回セットフラグ
  //Train2_Funk32_Flag  = 0;                                 // Train2 Funk32　1回セットフラグ
  //Train2_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train2_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ
  Train3_Funk22_Flag  = 0;                                   // Train3 Funk22 １回セットフラグ
  Train3_Funk32_Flag  = 0;                                   // Train3 Funk32　1回セットフラグ
  Train3_Sub_go_Flag  = 0;                                   // Subから列車スタート許可フラグ
  Train3_Main_go_Flag = 0;                                   // Mainから列車スタート許可フラグ
  //Train4_Funk22_Flag  = 0;                                 // Train4 Funk22 １回セットフラグ
  //Train4_Funk32_Flag  = 0;                                 // Train4 Funk32　1回セットフラグ
  //Train4_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train4_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ

  Priority_Select_Flag = 0;

  if(M_Priority_go_Flag==1){
    M_Priority_go_Flag = 0;
  }
  if(S_Priority_go_Flag==1){
    S_Priority_go_Flag = 0;
  }

  if(Train3==6 && (Train1==7 || Train2==7 || Train4==7))
  {
    data[5] = SpeedZero;                                     // Train3 停止
    data[6] = F1_L0;                                         // forward/Light Off
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }else if(Train3==6 && (Train1==8 || Train2==8 || Train4==8)){
    data[5] = SpeedZero;                                     // Train3 speed:Slow
    data[6] = F3_L0;                                         // forward/Light On
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }else if(Train3==6){
    data[5] = SpeedLow3_1;                                   // Train3 speed:中間速度
    data[6] = F3_L0;                                         // forward/Light On
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }
}
// ** Train3/Poji06 END *****************************************************************

// ** Train4/Poji06 *********************************************************************
void Train4_Funk06(){
  M_Servo_go_Flag  = 0;
  S_Servo_go_Flag  = 0;
  M_Train_go_Flag  = 0;
  S_Train_go_Flag  = 0;

  Sub_Timer_Flag  = 0;
  Main_Timer_Flag = 0;

  //Train1_Funk22_Flag  = 0;                                 // Train1 Funk22 １回セットフラグ
  //Train1_Funk32_Flag  = 0;                                 // Train1 Funk32　1回セットフラグ
  //Train1_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train1_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ
  //Train2_Funk22_Flag  = 0;                                 // Train2 Funk22 １回セットフラグ
  //Train2_Funk32_Flag  = 0;                                 // Train2 Funk32　1回セットフラグ
  //Train2_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train2_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ
  //Train3_Funk22_Flag  = 0;                                 // Train3 Funk22 １回セットフラグ
  //Train3_Funk32_Flag  = 0;                                 // Train3 Funk32　1回セットフラグ
  //Train3_Sub_go_Flag  = 0;                                 // Subから列車スタート許可フラグ
  //Train3_Main_go_Flag = 0;                                 // Mainから列車スタート許可フラグ
  Train4_Funk22_Flag  = 0;                                   // Train4 Funk22 １回セットフラグ
  Train4_Funk32_Flag  = 0;                                   // Train4 Funk32　1回セットフラグ
  Train4_Sub_go_Flag  = 0;                                   // Subから列車スタート許可フラグ
  Train4_Main_go_Flag = 0;                                   // Mainから列車スタート許可フラグ
  
  Priority_Select_Flag = 0;

  if(M_Priority_go_Flag==1){
    M_Priority_go_Flag = 0;
  }
  if(S_Priority_go_Flag==1){
    S_Priority_go_Flag = 0;
  }

  if(Train4==6 && (Train1==7 || Train2==7 || Train3==7))
  {
    data[7] = SpeedZero;                                     // Train4 停止
    data[8] = F1_L0;                                         // forward/Light Off
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }else if(Train4==6 && (Train1==8 || Train2==8 || Train3==8)){
    data[7] = SpeedLow4_1;                                   // Train4 speed:Slow
    data[8] = F3_L0;                                         // forward/Light On
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }else if(Train4==6){
    data[7] = SpeedLow4_1;                                   // Train4 speed:中間速度
    data[8] = F3_L0;                                         // forward/Light On
    data[9] = Train1;                                        // Train1 位置情報
    data[10]= Train2;                                        // Train2 位置情報
    data[11]= Train3;                                        // Train3 位置情報
    data[12]= Train4;                                        // Train4 位置情報
    data[13]= ServoInPoji;                                   // ServoInPoji
    data[14]= ServoOutPoji;                                  // Sub:0 Main:1
  }
}
// ** Train4/Poji06 END *****************************************************************
