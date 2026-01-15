// ** Train1/Poji08 *********************************************************************
void Train1_Funk08(){
  rando_time_tunnel_set_Flag =0;
  random_time_tunnel_set = 0;
  Tunnel_Timer_Flag = 0;
  T_Timer_set = 0;//Tunnel_Timer_Flag Tunnel_Timer_Flag
  T_Train_go = 0;
  Funk7_Flag = 0;

  if(Train1==8 && (Train2==9 || Train3==9 || Train4==9))
  {
    data[1] = SpeedZero;                                             // Train1 停止
    data[2] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train1==8 && (Train2==10 || Train3==10 || Train4==10)){
    data[1] = SpeedLow1_1;                                           // Train1 speed:Slow
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train1==8){
    data[1] = SpeedLow1_1;                                           // Train1 speed:中間速度
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train1/Poji08 END *****************************************************************

// ** Train2/Poji08 *********************************************************************
void Train2_Funk08(){
  rando_time_tunnel_set_Flag =0;
  random_time_tunnel_set = 0;
  Tunnel_Timer_Flag = 0;
  T_Timer_set = 0;
  T_Train_go = 0;
  Funk7_Flag = 0;

  if(Train2==8 && (Train1==9 || Train3==9 || Train4==9))
  {
    data[3] = SpeedZero;                                             // Train2 停止
    data[4] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train2==8 && (Train1==10 || Train3==10 || Train4==10)){
    data[3] = SpeedLow2_1;                                           // Train2 speed:Slow
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train2==8){
    data[3] = SpeedLow2_1;                                           // Train2 speed:中間速度
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train2/Poji08 END *****************************************************************

// ** Train3/Poji08 *********************************************************************
void Train3_Funk08(){
  rando_time_tunnel_set_Flag =0;
  random_time_tunnel_set = 0;
  Tunnel_Timer_Flag = 0;
  T_Timer_set = 0;
  T_Train_go = 0;
  Funk7_Flag = 0;

  if(Train3==8 && (Train1==9 || Train2==9 || Train4==9))
  {
    data[5] = SpeedZero;                                             // Train3 停止
    data[6] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train3==8 && (Train1==10 || Train2==10 || Train4==10)){
    data[5] = SpeedLow3_1;                                           // Train3 speed:Slow
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train3==8){
    data[5] = SpeedMid3;                                           // Train3 speed:中間速度
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train3/Poji08 END *****************************************************************

// ** Train4/Poji08 *********************************************************************
void Train4_Funk08(){
  rando_time_tunnel_set_Flag =0;
  random_time_tunnel_set = 0;
  Tunnel_Timer_Flag = 0;
  T_Timer_set = 0;
  T_Train_go = 0;
  Funk7_Flag = 0;

  if(Train4==8 && (Train1==9 || Train2==9 || Train3==9))
  {
    data[7] = SpeedZero;                                             // Train4 停止
    data[8] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train4==8 && (Train1==10 || Train2==10 || Train3==10)){
    data[7] = SpeedLow4_1;                                           // Train4 speed:Slow
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train4==8){
    data[7] = SpeedLow4_1;                                           // Train4 speed:中間速度
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train4/Poji08 END *****************************************************************           
