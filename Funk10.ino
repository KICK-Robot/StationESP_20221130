// ** Train1/Poji10 *********************************************************************
void Train1_Funk10(){
// ++ Timer Set +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  if(Train1==10 && Funk10_Flag==0){                             // "10"に到着
    data[1] = SpeedZero;                                        // Train1 Speed=停止
    data[2] = F1_L0;                                            // forward/Light Off
    data[9] = Train1;                                           // Train1 位置情報
    data[10]= Train2;                                           // Train2 位置情報
    data[11]= Train3;                                           // Train3 位置情報
    data[12]= Train4;                                           // Train4 位置情報
    L_Timer_set_Lib();                                          // Local Station Timer set(New)
    Funk10_Flag = 1;                                            // Local Station Startフラグ
  }
  if((random_time_local <= random_time_local_set) && L_Train_go == 0){
    count_local_Flag = 1;                                      // 時間減算開始
    data[23] = random_time_local;
  }
  if((random_time_local == 0) && L_Train_go == 0){
    count_local_Flag = 0;                                      // 時間減算ストップ
    data[1] = SpeedMid1;                                        // Train1 Speed=中速
    data[2] = F3_L0;                                            // forward/Light On
    data[9] = Train1;                                           // Train1 位置情報
    data[10]= Train2;                                           // Train2 位置情報
    data[11]= Train3;                                           // Train3 位置情報
    data[12]= Train4;                                           // Train4 位置情報
    data[23] =  0;
    L_Train_go = 1;
  }
}
// ** Train1/Poji10 END ******************************************************************

// ** Train2/Poji10 **********************************************************************
void Train2_Funk10(){
// ++ Timer Set +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  if(Train2==10 && Funk10_Flag==0){                             // "10"に到着
    data[3] = SpeedZero;                                        // Train2 Speed=停止
    data[4] = F1_L0;                                            // forward/Light Off
    data[9] = Train1;                                           // Train1 位置情報
    data[10]= Train2;                                           // Train2 位置情報
    data[11]= Train3;                                           // Train3 位置情報
    data[12]= Train4;                                           // Train4 位置情報
    L_Timer_set_Lib();                                          // Local Station Timer set(New)
    Funk10_Flag = 1;                                            // Local Station Startフラグ
  }
  if((random_time_local <= random_time_local_set) && L_Train_go == 0){
    count_local_Flag = 1;                                      // 時間減算開始
    data[23] = random_time_local;
  }
  if((random_time_local == 0) && L_Train_go == 0){
    count_local_Flag = 0;                                      // 時間減算ストップ
    data[3] = SpeedMid1;                                        // Train2 Speed=中速
    data[4] = F3_L0;                                            // forward/Light On
    data[9] = Train1;                                           // Train1 位置情報
    data[10]= Train2;                                           // Train2 位置情報
    data[11]= Train3;                                           // Train3 位置情報
    data[12]= Train4;                                           // Train4 位置情報
    data[23] =  0;
    L_Train_go = 1;
  }
}
// ** Train2/Poji10 END ******************************************************************

// ** Train3/Poji10 **********************************************************************
void Train3_Funk10(){
// ++ Timer Set +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  if(Train1==10 && Funk10_Flag==0){                             // "10"に到着
    data[5] = SpeedZero;                                        // Train3 Speed=停止
    data[6] = F1_L0;                                            // forward/Light Off
    data[9] = Train1;                                           // Train1 位置情報
    data[10]= Train2;                                           // Train2 位置情報
    data[11]= Train3;                                           // Train3 位置情報
    data[12]= Train4;                                           // Train4 位置情報
    L_Timer_set_Lib();                                          // Local Station Timer set(New)
    Funk10_Flag = 1;                                            // Local Station Startフラグ
  }
  if((random_time_local <= random_time_local_set) && L_Train_go == 0){
    count_local_Flag = 1;                                      // 時間減算開始
    data[23] = random_time_local;
  }
  if((random_time_local == 0) && L_Train_go == 0){
    count_local_Flag = 0;                                      // 時間減算ストップ
    data[5] = SpeedMid1;                                        // Train3 Speed=中速
    data[6] = F3_L0;                                            // forward/Light On
    data[9] = Train1;                                           // Train1 位置情報
    data[10]= Train2;                                           // Train2 位置情報
    data[11]= Train3;                                           // Train3 位置情報
    data[12]= Train4;                                           // Train4 位置情報
    data[23] =  0;
    L_Train_go = 1;
  }
}
// ** Train3/Poji10 END ******************************************************************

// ** Train4/Poji10 **********************************************************************
void Train4_Funk10(){
// ++ Timer Set +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  if(Train4==10 && Funk10_Flag==0){                             // "10"に到着
    data[7] = SpeedZero;                                        // Train4 Speed=停止
    data[8] = F1_L0;                                            // forward/Light Off
    data[9] = Train1;                                           // Train1 位置情報
    data[10]= Train2;                                           // Train2 位置情報
    data[11]= Train3;                                           // Train3 位置情報
    data[12]= Train4;                                           // Train4 位置情報
    L_Timer_set_Lib();                                          // Local Station Timer set(New)
    Funk10_Flag = 1;                                            // Local Station Startフラグ
  }
  if((random_time_local <= random_time_local_set) && L_Train_go == 0){
    count_local_Flag = 1;                                      // 時間減算開始
    data[23] = random_time_local;
  }
  if((random_time_local == 0) && L_Train_go == 0){
    count_local_Flag = 0;                                      // 時間減算ストップ
    data[7] = SpeedMid1;                                        // Train4 Speed=中速
    data[8] = F3_L0;                                            // forward/Light On
    data[9] = Train1;                                           // Train1 位置情報
    data[10]= Train2;                                           // Train2 位置情報
    data[11]= Train3;                                           // Train3 位置情報
    data[12]= Train4;                                           // Train4 位置情報
    data[23] =  0;
    L_Train_go = 1;
  }
}
// ** Train4/Poji10 END ******************************************************************
