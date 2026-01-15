// ** Timer Set ***************************************************************************
/*
void S_Timer_set_Lib(){                                              // Sub Timer Set Library
  if(S_Timer_set == 0 && Sub_Timer_Flag == 0){
    rando_time_sub_set_Flag = 0;                                     // 乱数セット許可
    random_generator2();                                             // Sub セット時・時間保存＜2022/11/05追加＞
    rando_time_sub_set_Flag = 0;                                     // 乱数セット禁止
    Sub_Timer_Flag = 1;                                              // Timer Set １回のみ<OK>
  }
}

void M_Timer_set_Lib(){                                              // Main Timer Set Library
  if(M_Timer_set == 0 && Main_Timer_Flag == 0){                      // Main側 Timer Set Flag
    rando_time_main_set_Flag = 0;                                    // 乱数セット許可
    random_generator1();                                             // Main セット時・時間保存＜2022/11/05追加＞
    rando_time_main_set_Flag = 0;                                    // 乱数セット許可
    Main_Timer_Flag = 1;                                             // Timer Set １回のみ
  }
}
*/
void L_Timer_set_Lib(){                                              // Local Station Timer Set
  if(L_Timer_set == 0 && Local_Timer_Flag == 0){                     // Local Station Timer Set Flag
    rando_time_local_set_Flag = 0;                                   // 乱数セット許可
    random_generator3();                                             // Localセット時・時間保存＜2022/11/05追加＞
    rando_time_local_set_Flag = 0;                                   // 乱数セット許可
    Local_Timer_Flag = 1;                                            // Timer Set １回のみ
  }
}

void T_Timer_set_Lib(){                                              // Tunnel Timer Set
  if(T_Timer_set == 0 && Tunnel_Timer_Flag == 0){                    // Tunnel Timer Set Flag
    rando_time_tunnel_set_Flag = 0;                                  // 乱数セット許可
    random_generator4();                                             // Tunnel セット時・時間保存＜2022/11/05追加＞
    rando_time_tunnel_set_Flag = 0;                                  // 乱数セット許可
    Tunnel_Timer_Flag = 1;                                           // Timer Set １回のみ
  }
}
// ** Timer Set END ***********************************************************************
