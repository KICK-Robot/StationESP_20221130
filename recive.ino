// ** recive ******************************************************************************
void recive(){
  if (Serial2.available() > 0) {                                     // Recive data があれば処理
    Train = Serial2.readStringUntil('\n');                           // 改行まで読込み
  }
  
  Hedder = Train.substring(0,2);                                     // "99"取り出し
  str = Train.length();
  footer = Train.substring(17,18);                                   // "F"取り出し
  
  if(Hedder=="99" && str=="19" && footer=="F"){                      // データは無視
    Data1 = Train.substring(3,5);                                    // Train1 位置情報切出し
    Train1 = Data1.toInt();                                          // 上記データを整数化
    Data2 = Train.substring(6,8);                                    // Train2 位置情報切出し
    Train2 = Data2.toInt();                                          // 上記データを整数化
    Data3 = Train.substring(9,11);                                   // Train3 位置情報切出し
    Train3 = Data3.toInt();                                          // 上記データを整数化
    Data4 = Train.substring(12,14);                                  // Train4 位置情報切出し
    Train4 = Data4.toInt();                                          // 上記データを整数化
    Data5 = Train.substring(15,17);                                  // 入口出口サーボ位置情報切出し（00－03）
    ServoInfo = Data5.toInt();                                       // ServoIn/Out 総合確認情報(00-03)///
  }
}
// ** recive end **************************************************************************
