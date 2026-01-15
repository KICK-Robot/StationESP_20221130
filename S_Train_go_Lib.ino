// ** Sub Train Go Flag Set *********************************************************************
void S_Train_go_Lib(){
  if((random_train_time_sub <= random_train_time_sub_set) && S_Priority_go_Flag==1 && S_Train_go_Flag == 0){ // ＜2022/11/05追加＞ 
    count_train_sub_Flag = 1;                        // 列車スタートまでカウントスタート(割込み1sec）
    data[22] = random_train_time_sub;
  }
  if((random_train_time_sub == 0) && S_Priority_go_Flag==1 && S_Train_go_Flag == 0){ // ＜2022/11/05追加＞  
    count_train_sub_Flag = 0;                        // 列車スタートまでカウントストップ(割込み1sec）
    data[22] = 0;
    S_Train_go_Flag = 1;                             // セット1回のみフラグ
  }
}
// ** Sub Train Go Flag Set END *****************************************************************
