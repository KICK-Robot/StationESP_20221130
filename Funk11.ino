// ** Train1/Poji11 **********************************************************************
void Train1_Funk11(){
  rando_time_local_set_Flag = 0;
  random_time_local_set = 0;
  Local_Timer_Flag = 0;
  L_Timer_set      = 0;
  L_Train_go       = 0;
  Funk10_Flag      = 0;
  //ISS_Flag         = 0;

  if(Train2==21 || Train3==21 || Train4==21){
    ServoInPojiBuff = 2;                                           // 入口ServoをMainへ
    ServoInFlag = 0;                                               // 上記設定とペア
  }
  
  if(Train2==31 || Train3==31 || Train4==31){
    ServoInPojiBuff = 1;                                           // 入口ServoをSubへ
    ServoInFlag = 1;                                               // 上記設定とペア      
  }
  
  if((!(Train2==21 || Train3==21 || Train4==21)) && (!(Train2==31 || Train3==31 || Train4==31))){
    ServoInPojiBuff = InServo[sel];
    if(ServoInPojiBuff == 1){
      ServoInFlag = 1;                                             // Sub条件フラグ
    }
    if(ServoInPojiBuff == 2){
      ServoInFlag = 0;                                             // Main条件フラグ
    }
    if(sel_Flag == 0){
      if((sel < 19) && (sel >= 0)){
        sel = sel + 1;
      }else{
        sel = 0;
      }
    sel_Flag = 1;     
    }
  }
  
  if(Train1==11 && (Train2==12 || Train3==12 || Train4==12))
  {
    data[1] = SpeedZero;                                             // Train1 停止
    data[2] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train1==11 && (Train2==13 || Train3==13 || Train4==13)){
    data[1] = SpeedLow1_1;                                           // Train1 speed:Slow
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train1==11){
    data[1] = SpeedMid1;                                             // Train1 speed:中間速度
    data[2] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train1/Poji11 END ******************************************************************

// ** Train2/Poji11 **********************************************************************
void Train2_Funk11(){
  rando_time_local_set_Flag = 0;
  random_time_local_set = 0;
  Local_Timer_Flag = 0;
  L_Timer_set      = 0;
  L_Train_go       = 0;
  Funk10_Flag      = 0;
  //ISS_Flag         = 0;

  if(Train1==21 || Train3==21 || Train4==21){
      ServoInPojiBuff = 2;                                           // 入口ServoをMainへ
      ServoInFlag = 0;                                               // 上記設定とペア
  }
  if(Train1==31 || Train3==31 || Train4==31){
      ServoInPojiBuff = 1;                                           // 入口ServoをSubへ
      ServoInFlag = 1;                                               // 上記設定とペア
  }
  if((!(Train1==21 || Train3==21 || Train4==21)) && (!(Train1==31 || Train3==31 || Train4==31))){
    ServoInPojiBuff = InServo[sel];
    if(ServoInPojiBuff == 1){
      ServoInFlag = 1;                                             // Sub条件フラグ
    }
    if(ServoInPojiBuff == 2){
      ServoInFlag = 0;                                             // Main条件フラグ
    }
    if(sel_Flag == 0){  
      if((sel < 19) && (sel >= 0)){
        sel = sel + 1;
      }else{
        sel = 0;
      }
    sel_Flag = 1;     
    }
  }

  if(Train2==11 && (Train1==12 || Train3==12 || Train4==12))
  {
    data[3] = SpeedZero;                                             // Train2 停止
    data[4] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train2==11 && (Train1==13 || Train3==13 || Train4==13)){
    data[3] = SpeedLow2_1;                                           // Train2 speed:Slow
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train2==11){
    data[3] = SpeedMid2;                                             // Train2 speed:中間速度
    data[4] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train2/Poji11 END ******************************************************************

// ** Train3/Poji11 **********************************************************************
void Train3_Funk11(){
  rando_time_local_set_Flag = 0;
  random_time_local_set = 0;
  Local_Timer_Flag = 0;
  L_Timer_set      = 0;
  L_Train_go       = 0;
  Funk10_Flag      = 0;
  //ISS_Flag = 0;

  if(Train1==21 || Train2==21 || Train4==21){
      ServoInPojiBuff = 2;                                           // 入口ServoをMainへ
      ServoInFlag = 0;                                               // 上記設定とペア
  }
  if(Train1==31 || Train2==31 || Train4==31){
      ServoInPojiBuff = 1;                                           // 入口ServoをSubへ
      ServoInFlag = 1;                                               // 上記設定とペア
  }
  if((!(Train1==21 || Train2==21 || Train4==21)) && (!(Train1==31 || Train2==31 || Train4==31))){
    ServoInPojiBuff = InServo[sel];
    if(ServoInPojiBuff == 1){
      ServoInFlag = 1;                                             // Sub条件フラグ
    }
    if(ServoInPojiBuff == 2){
      ServoInFlag = 0;                                             // Main条件フラグ
    }
    if(sel_Flag == 0){  
      if((sel < 19) && (sel >= 0)){
        sel = sel + 1;
      }else{
        sel = 0;
      }
    sel_Flag = 1;     
    }
  }

  if(Train3==11 && (Train1==12 || Train2==12 || Train4==12))
  {
    data[5] = SpeedZero;                                             // Train3 停止
    data[6] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train3==11 && (Train1==13 || Train2==13 || Train4==13)){
    data[5] = SpeedLow3_1;                                           // Train3 speed:Slow
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train3==11){
    data[5] = SpeedMid3;                                             // Train3 speed:中間速度
    data[6] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train3/Poji11 END ******************************************************************

// ** Train4/Poji11 **********************************************************************
void Train4_Funk11(){
  rando_time_local_set_Flag = 0;
  random_time_local_set = 0;
  Local_Timer_Flag = 0;
  L_Timer_set      = 0;
  L_Train_go       = 0;
  Funk10_Flag      = 0;
  //ISS_Flag         = 0;

  if(Train1==21 || Train2==21 || Train3==21){
      ServoInPojiBuff = 2;                                           // 入口ServoをMainへ
      ServoInFlag = 0;                                               // 上記設定とペア
    }
  if(Train1==31 || Train2==31 || Train3==31){
      ServoInPojiBuff = 1;                                           // 入口ServoをSubへ
      ServoInFlag = 1;                                               // 上記設定とペア
  }
  if((!(Train1==21 || Train2==21 || Train3==21)) && (!(Train1==31 || Train2==31 || Train3==31))){
    ServoInPojiBuff = InServo[sel];
    if(ServoInPojiBuff == 1){
      ServoInFlag = 1;                                             // Sub条件フラグ
    }
    if(ServoInPojiBuff == 2){
      ServoInFlag = 0;                                             // Main条件フラグ
    }
    if(sel_Flag == 0){  
      if((sel < 19) && (sel >= 0)){
        sel = sel + 1;
      }else{
        sel = 0;
      }
    sel_Flag = 1;     
    }
  }
  
  if(Train4==11 && (Train1==12 || Train2==12 || Train3==12))
  {
    data[7] = SpeedZero;                                             // Train4 停止
    data[8] = F1_L0;                                                 // forward/Light Off
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train4==11 && (Train1==13 || Train2==13 || Train3==13)){
    data[7] = SpeedLow4_1;                                           // Train4 speed:Slow
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }else if(Train4==11){
    data[7] = SpeedMid4;                                             // Train4 speed:中間速度
    data[8] = F3_L0;                                                 // forward/Light On
    data[9] = Train1;                                                // Train1 位置情報
    data[10]= Train2;                                                // Train2 位置情報
    data[11]= Train3;                                                // Train3 位置情報
    data[12]= Train4;                                                // Train4 位置情報
    ServoInPoji = ServoInPojiBuff;                                   // "10"で設定した位置をここで有効化
    data[13]= ServoInPoji;                                           // ServoInPoji
    data[14]= ServoOutPoji;                                          // Sub:0 Main:1
  }
}
// ** Train4/Poji11 **********************************************************************
