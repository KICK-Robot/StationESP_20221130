// ** Train1/Poji12 **********************************************************************
void Train1_Funk12(){
  if(Train1==12 && (Train2==13 || Train3==13 || Train4==13))
  {
    data[1] = SpeedZero;                                             // Train1 停止
    data[2] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train1==12 && (Train2==21 || Train3==21 || Train4==21 || Train2==31 || Train3==31 || Train4==31)){
    data[1] = SpeedLow1_1;                                           // Train1 speed:Slow
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train1==12){
    data[1] = SpeedMid1;                                             // Train1 speed:中間速度
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train1/Poji12 END ******************************************************************

// ** Train2/Poji12 **********************************************************************
void Train2_Funk12(){  
  if(Train2==12 && (Train1==13 || Train3==13 || Train4==13))
  {
    data[3] = SpeedZero;                                             // Train2 停止
    data[4] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train2==12 && (Train1==21 || Train3==21 || Train4==21 || Train1==31 || Train3==31 || Train4==31)){
    data[3] = SpeedLow2_1;                                           // Train2 speed:Slow
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train2==12){
    data[3] = SpeedMid2;                                             // Train2 speed:中間速度
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train2/Poji12 END ******************************************************************

// ** Train3/Poji12 **********************************************************************
void Train3_Funk12(){
  if(Train3==12 && (Train1==13 || Train2==13 || Train4==13))
  {
    data[5] = SpeedZero;                                             // Train3 停止
    data[6] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train3==12 && (Train1==21 || Train2==21 || Train4==21 || Train1==31 || Train2==31 || Train4==31)){
    data[5] = SpeedLow3_1;                                           // Train3 speed:Slow
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
//    ServoInPoji = ServoInPojiBuff;                                 // "10"で設定した位置をここで有効化
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train3==12){
    data[5] = SpeedMid3;                                             // Train3 speed:中間速度
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train3/Poji12 END ******************************************************************

// ** Train4/Poji12 **********************************************************************
void Train4_Funk12(){
  if(Train4==12 && (Train1==13 || Train2==13 || Train3==13))
  {
    data[7] = SpeedZero;                                             // Train4 停止
    data[8] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train4==12 && (Train1==21 || Train2==21 || Train3==21 || Train1==31 || Train2==31 || Train3==31)){
    data[7] = SpeedLow4_1;                                           // Train4 speed:Slow
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train4==12){
    data[7] = SpeedMid4;                                             // Train4 speed:中間速度
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train4/Poji12 END ******************************************************************
