void random_generator1(){                                        // Main 用
  if(rando_time_main_set_Flag == 0){
    random_servo_time_main_set = random(5,30);                   // 乱数の最小値を5sec、最大値を30secに指定
    random_train_time_main_set = random_servo_time_main_set + 5; // サーボ起動後5秒後列車スタート
    random_servo_time_main = random_servo_time_main_set;         // 乱数セット値を減算変数へ
    random_train_time_main = random_train_time_main_set;         // サーボ起動後5秒後列車スタート
    rando_time_main_set_Flag = 1;                                // 乱数セットは1回のみ
  }
}

void random_generator2(){                                        // Sub 用
  if(rando_time_sub_set_Flag == 0){
    random_servo_time_sub_set = random(5,30);                    // 乱数の最小値を5sec、最大値を30secに指定
    random_train_time_sub_set = random_servo_time_sub_set + 5;   // サーボ起動後5秒後列車スタート
    random_servo_time_sub = random_servo_time_sub_set;           // 乱数セット値を減算変数へ
    random_train_time_sub = random_train_time_sub_set;           // サーボ起動後5秒後列車スタート
    rando_time_sub_set_Flag = 1;                                 // 乱数セットは1回のみ
  }
}

void random_generator3(){                                        // Local 用
  if(rando_time_local_set_Flag == 0){  
    random_time_local_set = random(5,30);                        // 乱数の最小値を5sec、最大値を30secに指定
    random_time_local = random_time_local_set;                   // 乱数セット値を減算変数へ  
    rando_time_local_set_Flag = 1;                               // 乱数セットは1回のみ
  }
}

void random_generator4(){                                        // Tunnel 用
  if(rando_time_tunnel_set_Flag == 0){  
    random_time_tunnel_set = random(5,30);                       // 乱数の最小値を5sec、最大値を30secに指定
    random_time_tunnel = random_time_tunnel_set;                 // 乱数セット値を減算変数へ    
    rando_time_tunnel_set_Flag = 1;                              // 乱数セットは1回のみ
  }
}
