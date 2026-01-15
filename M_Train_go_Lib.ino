// ** Main Train Go Flag Set *******************************************************************
void M_Train_go_Lib(){
  if((random_train_time_main <= random_train_time_main_set) && M_Priority_go_Flag==1 && M_Train_go_Flag == 0){ // ＜2022/11/08追加＞ 
    count_train_main_Flag = 1;                        // 列車スタートまでカウントスタート(割込み1sec）
    data[21] = random_train_time_main;    
  }
  if((random_train_time_main == 0) && M_Priority_go_Flag==1 && M_Train_go_Flag == 0){ // ＜2022/11/05追加＞
    count_train_main_Flag = 0;                        // 列車スタートまでカウントストップ(割込み1sec）
    data[21] = 0;
    M_Train_go_Flag = 1;                              // セット1回のみフラグ
  }
}
// ** Main Train Go Flag Set END *****************************************************************
