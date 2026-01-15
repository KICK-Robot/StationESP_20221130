// ** Train1/Poji13 **********************************************************************
void Train1_Funk13(){
  sel_Flag = 0;                                                     // InServo Contole set flagリセット
  if(Train1==13 && (Train2==21 || Train3==21 || Train4==21) && ServoInPoji==1)
  {
    data[1] = SpeedZero;                                             // Train1 停止
    data[2] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train1==13 && (Train2==22 || Train3==22 || Train4==22) && ServoInPoji==1){
    data[1] = SpeedLow1_1;                                           // Train1 speed:低速度
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
    }
  if(Train1==13 && (Train2==31 || Train3==31 || Train4==31) && ServoInPoji==2)
  {
    data[1] = SpeedZero;                                             // Train1 停止
    data[2] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train1==13 && (Train2==32 || Train3==32 || Train4==32) && ServoInPoji==2){
    data[1] = SpeedLow1_1;                                           // Train1 speed:低速度
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
    }
  if(Train1==13 && (!(Train2==21 || Train3==21 || Train4==21)) && (!(Train2==31 || Train3==31 || Train4==31)))
  {
    data[1] = SpeedLow1_1;                                             // Train1 停止
    data[2] = F3_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
}
// ** Train1/Poji13 END ******************************************************************

// ** Train2/Poji13 **********************************************************************
void Train2_Funk13(){
  sel_Flag = 0;                                                     // InServo Contole set flagリセット
  if(Train2==13 && (Train1==21 || Train3==21 || Train4==21) && ServoInPoji==1)
  {
    data[3] = SpeedZero;                                             // Train2 停止
    data[4] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train2==13 && (Train1==22 || Train3==22 || Train4==22) && ServoInPoji==1){
    data[3] = SpeedLow2_1;                                           // Train2 speed:Slow
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
  if(Train2==13 && (Train1==31 || Train3==31 || Train4==31) && ServoInPoji==2)
  {
    data[3] = SpeedZero;                                             // Train2 停止
    data[4] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train2==13 && (Train1==32 || Train3==32 || Train4==32) && ServoInPoji==2){
    data[3] = SpeedLow2_1;                                           // Train2 speed:Slow
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
  if(Train2==13 && (!(Train1==21 || Train3==21 || Train4==21)) && (!(Train1==31 || Train3==31 || Train4==31)))
  {
    data[3] = SpeedLow2_1;                                             // Train1 停止
    data[4] = F3_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
}
// ** Train2/Poji13 END ******************************************************************

// ** Train3/Poji13 **********************************************************************
void Train3_Funk13(){
  sel_Flag = 0;                                                     // InServo Contole set flagリセット
  if(Train3==13 && (Train1==21 || Train2==21 || Train4==21) && ServoInPoji==1)
  {
    data[5] = SpeedZero;                                             // Train3 停止
    data[6] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train3==13 && (Train1==22 || Train2==22 || Train4==22) && ServoInPoji==1){
    data[5] = SpeedLow3_1;                                           // Train3 speed:Slow
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
  if(Train3==13 && (Train1==31 || Train2==31 || Train4==31) && ServoInPoji==2)
  {
    data[5] = SpeedZero;                                             // Train3 停止
    data[6] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train3==13 && (Train1==32 || Train2==32 || Train4==32) && ServoInPoji==2){
    data[5] = SpeedLow3_1;                                           // Train3 speed:Slow
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
  if(Train3==13 && (!(Train1==21 || Train2==21 || Train4==21)) && (!(Train1==31 || Train2==31 || Train4==31)))
  {
    data[5] = SpeedLow3_1;                                             // Train1 停止
    data[6] = F3_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
}
// ** Train3/Poji13 END ******************************************************************

// ** Train4/Poji13 **********************************************************************
void Train4_Funk13(){
  sel_Flag = 0;                                                     // InServo Contole set flagリセット
  if(Train4==13 && (Train1==21 || Train2==21 || Train3==21) && ServoInPoji==1)
  {
    data[7] = SpeedZero;                                             // Train4 停止
    data[8] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train4==13 && (Train1==22 || Train2==22 || Train3==22) && ServoInPoji==1){
    data[7] = SpeedLow4_1;                                           // Train4 speed:Slow
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
  if(Train4==13 && (Train1==31 || Train2==31 || Train3==31) && ServoInPoji==2)
  {
    data[7] = SpeedZero;                                             // Train4 停止
    data[8] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train4==13 && (Train1==32 || Train2==32 || Train3==32) && ServoInPoji==2){
    data[7] = SpeedLow4_1;                                           // Train4 speed:Slow
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
  if(Train4==13 && (!(Train1==21 || Train2==21 || Train3==21)) && (!(Train1==31 || Train2==31 || Train3==31)))
  {
    data[7] = SpeedLow4_1;                                             // Train1 停止
    data[8] = F3_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
}
// ** Train4/Poji13 **********************************************************************
