// ** Train1/Poji31 ***********************************************************************
void Train1_Funk31(){
  if(Train1 == 31 && (Train2 == 32 || Train3 == 32 || Train4 == 32)){
    data[1] = SpeedZero;                                             // Train1 Speed=停止
    data[2] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train1 == 31 && (Train2 == 3 || Train3 == 3 || Train4 == 3)){
    data[1] = SpeedZero;                                             // Train2 Speed=停止
    data[2] = F1_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  //}else if(S_Priority_go_Flag==0 && M_Priority_go_Flag==0){
  }else if(M_Priority_go_Flag==0){    
    data[1] = SpeedLow1_1;                                           // Train1 Speed=slow
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
}
// ** Train1/Poji31 END *****************************************************************

// ** Train2/Poji31 *********************************************************************
void Train2_Funk31(){
  if(Train2 == 31 && (Train1 == 32 || Train3 == 32 || Train4 == 32)){
    data[3] = SpeedZero;                                             // Train2 Speed=停止
    data[4] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train2 == 31 && (Train1 == 3 || Train3 == 3 || Train4 == 3)){
    data[3] = SpeedZero;                                             // Train2 Speed=停止
    data[4] = F1_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  //}else if(S_Priority_go_Flag==0 && M_Priority_go_Flag==0){
  }else if(M_Priority_go_Flag==0){    
    data[3] = SpeedLow2_1;                                           // Train2 Speed=Slow
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
}
// ** Train2/Poji31 END *******************************************************************

// ** Train3/Poji31 ***********************************************************************
void Train3_Funk31(){
  if(Train3 == 31 && (Train1 == 32 || Train2 == 32 || Train4 == 32)){
    data[5] = SpeedZero;                                             // Train3 Speed=停止
    data[6] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train3 == 31 && (Train1 == 3 || Train2 == 3 || Train4 == 3)){
    data[5] = SpeedZero;                                             // Train3 Speed=停止
    data[6] = F1_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  //}else if(S_Priority_go_Flag==0 && M_Priority_go_Flag==0){
  }else if(M_Priority_go_Flag==0){    
    data[5] = SpeedLow3_1;                                           // Train3 Speed=slow
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
}
// ** Train3/Poji31 END *****************************************************************

// ** Train4/Poji31 *********************************************************************
void Train4_Funk31(){
  if(Train4 == 31 && (Train1 == 32 || Train2 == 32 || Train3 == 32)){
    data[7] = SpeedZero;                                             // Train4 Speed=停止
    data[8] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }else if(Train4 == 31 && (Train1 == 3 || Train2 == 3 || Train3 == 3)){
    data[7] = SpeedZero;                                             // Train4 Speed=停止
    data[8] = F1_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  //}else if(S_Priority_go_Flag==0 && M_Priority_go_Flag==0){
  }else if(M_Priority_go_Flag==0){
    data[7] = SpeedLow4_1;                                           // Train4 Speed=Slow
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:1 Main:2
  }
}
// ** Train4/Poji31 END *****************************************************************
