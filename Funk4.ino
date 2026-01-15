// ** Train1/Poji04 ****************************************************************************************************
void Train1_Funk04(){
  if(Train1==4 && (Train2==5 || Train3==5 || Train4==5))
  {
    data[1] = SpeedZero;                                             // Train1 停止
    data[2] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train1==4 && (Train2==6 || Train3==6 || Train4==6)){
    data[1] = SpeedLow1_1;                                           // Train1 speed:Slow
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train1==4){
    data[1] = SpeedMid1;                                             // Train1 speed:中間速度
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train1/Poji04 END *************************************************************************************************

// ** Train2/Poji04 *****************************************************************************************************
void Train2_Funk04(){
  if(Train2==4 && (Train1==5 || Train3==5 || Train4==5))
  {
    data[3] = SpeedZero;                                             // Train2 停止
    data[4] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train2==4 && (Train1==6 || Train3==6 || Train4==6)){
    data[3] = SpeedLow2_1;                                           // Train2 speed:Slow
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train2==4){
    data[3] = SpeedMid2;                                             // Train2 speed:中間速度
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train2/Poji04 END ************************************************************************************************

// ** Train3/Poji04 ****************************************************************************************************
void Train3_Funk04(){
  if(Train3==4 && (Train1==5 || Train2==5 || Train4==5))
  {
    data[5] = SpeedZero;                                             // Train3 停止
    data[6] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train3==4 && (Train1==6 || Train2==6 || Train4==6)){
    data[5] = SpeedLow3_1;                                           // Train3 speed:Slow
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train3==4){
    data[5] = SpeedMid3;                                             // Train3 speed:中間速度
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train3/Poji04 END ************************************************************************************************

// ** Train4/Poji04 ****************************************************************************************************
void Train4_Funk04(){
  if(Train4==4 && (Train1==5 || Train2==5 || Train3==5))
  {
    data[7] = SpeedZero;                                             // Train4 停止
    data[8] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train4==4 && (Train1==6 || Train2==6 || Train3==6)){
    data[7] = SpeedLow4_1;                                           // Train4 speed:Slow
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1bcm283
  }else if(Train4==4){
    data[7] = SpeedMid4;                                             // Train4 speed:中間速度
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train4/Poji04 END *************************************************************************************************
