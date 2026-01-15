// ** Out Servo Contlor ******************************************************************
void OutServoContlor(){
  if(ServoOutPoji == 2 && ServoOutFlag == 1){          // SubからMainへ
    digitalWrite(Ser_Out_Sub,  HIGH);                  // Servo Out Sub Contlor OFF
    digitalWrite(Sig_Out_S_GR,  LOW);                  // Signal Out Sub Red
    delay(10);
    digitalWrite(Ser_Out_Main,  LOW);                  // Servo Out Main  Contlor ON
    digitalWrite(Sig_Out_M_GR, HIGH);                  // Signal Out Main Green
    ServoOutFlag = 0;                                  // セット完了フラグ
    digitalWrite(ServoINT,     LOW);                   // Servo切り替え割り込み（MEGAへ）
    delay(1);
    digitalWrite(ServoINT,    HIGH);                   // Servo切り替え割り込み（MEGAへ）
    data[14] = ServoOutPoji;                           // Sub:1 Main:2
  }
  // MainからSubへ
  if(ServoOutPoji == 1 && ServoOutFlag == 0){          // Servo Out Main Contlor OFF
    digitalWrite(Ser_Out_Main, HIGH);                  // Servo In Main Contlor OFF
    digitalWrite(Sig_Out_M_GR,  LOW);                  // Signal In Main Red
    delay(10);
    digitalWrite(Ser_Out_Sub,   LOW);                  // Servo In Sub  Contlor ON
    digitalWrite(Sig_Out_S_GR, HIGH);                  // Signal In Sub Green
    ServoOutFlag = 1;                                  // セット完了フラグ
    digitalWrite(ServoINT,     LOW);                   // Servo切り替え割り込み（MEGAへ）
    delay(1);
    digitalWrite(ServoINT,    HIGH);                   // Servo切り替え割り込み（MEGAへ）
    data[14] = ServoOutPoji;                           // Sub:1 Main:2
  }
}
// ***************************************************************************************
