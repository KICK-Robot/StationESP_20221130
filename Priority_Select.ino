void Priority_Select(){
  if(Priority_Select_Flag==0){
    // Sub側のみ列車が入線している場合
    if((Train1==22 || Train2==22 || Train3==22 || Train4==22) && (!(Train1==32 || Train2==32 || Train3==32 || Train4==32))){
      S_Priority_go_Flag   = 1;                                            // 出発優先権フラグ（Sub）
      random_generator2();                                                 // Sub セット時・時間保存＜2022/11/05追加＞
      Priority_Select_Flag = 1;      
    }

    // Main側のみ列車が入線している場合
    if((Train1==32 || Train2==32 || Train3==32 || Train4==32) && (!(Train1==22 || Train2==22 || Train3==22 || Train4==22))){
      M_Priority_go_Flag   = 1;                                             // 出発優先フラグ（Main）
      random_generator1();                                                  // Main セット時・時間保存＜2022/11/05追加＞
      Priority_Select_Flag = 1;      
    }
    
    // Main Sub 両線に入線している場合
    if((Train1==32 || Train2==32 || Train3==32 || Train4==32) && ((Train1==22 || Train2==22 || Train3==22 || Train4==22))){
      if(OutPriority[prio]==1){                                             // Sub側
        S_Priority_go_Flag   = 1;                                           // 出発優先権フラグ（Sub）
        random_generator2();                                                // Sub セット時・時間保存＜2022/11/05追加＞
        Priority_Select_Flag = 1;        
      }
      if(OutPriority[prio]==2){                                             // Main側
        M_Priority_go_Flag   = 1;                                           // 出発優先フラグ（Main)
        random_generator1();                                                // Main セット時・時間保存＜2022/11/05追加＞
        Priority_Select_Flag = 1;        
      }
      if(prio >= 19){
        prio = 0;
      }else{
        prio = prio + 1;
      }
    }
  }
//  Priority_Select_Flag = 1;                                              // この関数に入れは「０」でも「１」でも「１」になってしまう。
}
