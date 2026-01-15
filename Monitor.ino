// ** Monitor ****************************************************************************
void Monitor(){
  Serial.print("rando_time_main_set_Flag :  ");
  Serial.print(rando_time_main_set_Flag);
  Serial.print("  rando_time_sub_set_Flag :  ");
  Serial.print(rando_time_sub_set_Flag);
  Serial.print("  random_train_time_main: ");
  Serial.print(random_train_time_main);
  Serial.print("  random_train_time_sub: ");
  Serial.print(random_train_time_sub);
  Serial.print("  Train[1]: ");
  Serial.print(data[1]);
  Serial.print("  Train[2]: ");
  Serial.print(data[3]);
  Serial.print("  Train[3]: ");
  Serial.print(data[5]);
  Serial.print("  Train[4]: ");
  Serial.println(data[7]);  
  //Serial.print("  count_train_sub_Flag: ");
  //Serial.print(count_train_sub_Flag);
  /*
  Serial.print("random_time_local_set : ");
  Serial.print(random_time_local_set);
  Serial.print("  random_time_local : ");
  Serial.print(random_time_local);
  Serial.print("  count_local_Flag   : ");
  Serial.print(count_local_Flag);
  Serial.print("  Funk10_Flag : ");
  Serial.print(Funk10_Flag);
  Serial.print("  L_Train_go : ");
  Serial.print(L_Train_go);
  Serial.print("  data[3] : ");
  Serial.println(data[3]);
  */
/*
// Sarevo 動作までの時間
  if((Diff_Time_Main <= OnTime2[i2]) && (Diff_Time_Main > 0)){   
    Diff_Time_Main_Servo_Monitor = OnTime2[i2] - Diff_Time_Main;
    Start_Servo_Main = Diff_Time_Main_Servo_Monitor / 1000;
    data[19] = Start_Servo_Main;
  }else{
    Start_Servo_Main = 0;
  }
    if((Diff_Time_Sub <= OnTime1[i1]) && (Diff_Time_Sub > 0)){
    Diff_Time_Sub_Servo_Monitor = OnTime1[i1] - Diff_Time_Sub;
    Start_Servo_Sub = Diff_Time_Sub_Servo_Monitor / 1000;
    data[20] = Start_Servo_Sub;    
  }else{
    Start_Servo_Sub = 0;
  }
// 列車スタートまでの時間  
if((Diff_Time_Main <= (OnTime2[i2] + 5000)) && (Diff_Time_Main > 0)){   
    Diff_Time_Main_Train_Monitor = (OnTime2[i2] + 5000) - Diff_Time_Main;
    Start_Train_Main = Diff_Time_Main_Train_Monitor / 1000;
    data[21] = Start_Train_Main;
  }else{
    Start_Train_Main = 0;
  }
  if((Diff_Time_Sub <= (OnTime1[i1] + 5000)) && (Diff_Time_Sub > 0)){  
    Diff_Time_Sub_Train_Monitor = (OnTime1[i1] + 5000) - Diff_Time_Sub;
    Start_Train_Sub = Diff_Time_Sub_Train_Monitor / 1000;
    data[22] = Start_Train_Sub;
  }else{
    Start_Train_Sub = 0;
  }
// トンネル内列車スタート時間
if((Diff_Time_Tunnel <= OnTime4[i4]) && (Diff_Time_Tunnel > 0)){  
    Diff_Time_Tunnel_Monitor = OnTime1[i4] - Diff_Time_Tunnel;
    Start_Train_Tunnel = Diff_Time_Tunnel_Monitor / 1000;
    data[24] = Start_Train_Tunnel;    
  }else{
    Start_Train_Tunnel = 0;
  }
// ローカル駅列車スタート時間
if((Diff_Time_Local <= OnTime3[i3]) && (Diff_Time_Local > 0)){
    Diff_Time_Local_Monitor = OnTime1[i3] - Diff_Time_Local;
    Start_Train_Local = Diff_Time_Local_Monitor / 1000;
    data[23] = Start_Train_Local;    
  }else{
    Start_Train_Local = 0;
  }
*/  
/*  
  Serial.print("S_Priorty_go_Flag: ");
  Serial.print(S_Priority_go_Flag);
  Serial.print("   M_Priority_go_Flag: ");
  Serial.println(M_Priority_go_Flag);
  Serial.print(Train1);
  Serial.print(" ");
  Serial.print(Train2);
  Serial.print(" ");
  Serial.print(Train3);
  Serial.print(" ");
  Serial.println(Train4);
  
  Serial.print("M_Timer_set: ");
  Serial.print(digitalRead(M_Timer_set));
  Serial.print("  M_go_Flag: ");
  Serial.print(M_go_Flag);
  Serial.print("  Train1_Main_Timer_Set_Flag: ");
  Serial.print(Train1_Main_Timer_Set_Flag);
  Serial.print("  Train2_Main_Timer_Set_Flag: ");
  Serial.println(Train2_Main_Timer_Set_Flag);
  
  Serial.print("S_Timer_set: ");
  Serial.print(digitalRead(S_Timer_set));
  Serial.print("  S_go_Flag: ");
  Serial.print(S_go_Flag);
  Serial.print("  Train1_Sub_Timer_Set_Flag: ");
  Serial.print(Train1_Sub_Timer_Set_Flag);
  Serial.print("  Train2_Sub_Timer_Set_Flag: ");
  Serial.println(Train2_Sub_Timer_Set_Flag);
  */
}
// ***************************************************************************************
