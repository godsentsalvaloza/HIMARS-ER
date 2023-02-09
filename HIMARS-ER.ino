//High Mobility Anti-Reckless System - Extended Range (HIMARS-ER)
//Version 2.0 Build 02/09/2023
//Automated traffic light

//Variables
  //Lights
    int greenLight = 13;
    int yellowLight = 12;
    int redLight = 11;
  //Buzzer
    int buzzer = 10;
  //7-Seg-disp
    int Fb = 9;
    int Eb = 8;
    int A = 7;
    int B = 6;
    int C = 5;
    int D = 4;
    int E = 3;
    int F = 2;
    int G = 1;
    int DP = 0;

void setup() {
  //Lights
    pinMode(greenLight, OUTPUT);
    pinMode(yellowLight, OUTPUT);
    pinMode(redLight, OUTPUT);
  //Buzzer
    pinMode(buzzer, OUTPUT);
  //7-seg-disp
    pinMode(Fb, OUTPUT);
    pinMode(Eb, OUTPUT);
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(DP, OUTPUT);
}

void loop() {
  //7-seg-disp - RESET
    digitalWrite (Fb, 1) ;
    digitalWrite (Eb, 1) ;
    digitalWrite (A, 1) ;
    digitalWrite (B, 1) ;
    digitalWrite (C, 1) ;
    digitalWrite (D, 1) ;
    digitalWrite (E, 1) ;
    digitalWrite (F, 1) ;
    digitalWrite (G, 1) ;
    digitalWrite (DP, 1) ;

  //redlight
    digitalWrite(redLight, 1);
    //10
      digitalWrite (Fb, 0) ;
      digitalWrite (Eb, 0) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 1) ;
      digitalWrite (DP, 0) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);

    //09
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 1) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);

    //08
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 0) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);

    //07
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 1) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 1) ;
      digitalWrite (DP, 1) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);

    //06
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 1) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 0) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);

    //05
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 1) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 1) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);

    //04
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 1) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 1) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 0) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);

    //03
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 0) ; 
      digitalWrite (DP, 1) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);

    //02
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 1) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 0) ; 
      digitalWrite (DP, 0) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);

    //01
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 1) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 1) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 1) ; 
      digitalWrite (DP, 1) ;
    //Buzzer
      tone(buzzer, 500);
        delay(500);
      noTone(buzzer);
        delay(500);
    digitalWrite(redLight, 0);

  //7-seg-disp - RESET
    digitalWrite (Fb, 1) ;
    digitalWrite (Eb, 1) ;
    digitalWrite (A, 1) ;
    digitalWrite (B, 1) ;
    digitalWrite (C, 1) ;
    digitalWrite (D, 1) ;
    digitalWrite (E, 1) ;
    digitalWrite (F, 1) ;
    digitalWrite (G, 1) ;
    digitalWrite (DP, 1) ;
  
  //yellowLight
    digitalWrite(yellowLight, 1);
    //03
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 0) ; 
      digitalWrite (DP, 1) ;
    //Buzzer
      tone(buzzer, 1000);
        delay(500);
      noTone(buzzer);
        delay(500);

    //02
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 1) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 0) ; 
      digitalWrite (DP, 0) ;
    //Buzzer
      tone(buzzer, 1000);
        delay(500);
      noTone(buzzer);
        delay(500);

    //01
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 1) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 1) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 1) ; 
      digitalWrite (DP, 1) ;
    //Buzzer
      tone(buzzer, 1000);
        delay(500);
      noTone(buzzer);
        delay(500);
    digitalWrite(yellowLight, 0);

  //7-seg-disp - RESET
    digitalWrite (Fb, 1) ;
    digitalWrite (Eb, 1) ;
    digitalWrite (A, 1) ;
    digitalWrite (B, 1) ;
    digitalWrite (C, 1) ;
    digitalWrite (D, 1) ;
    digitalWrite (E, 1) ;
    digitalWrite (F, 1) ;
    digitalWrite (G, 1) ;
    digitalWrite (DP, 1) ;
  
  //greenLight
    digitalWrite(greenLight, 1);
    //10
      digitalWrite (Fb, 0) ;
      digitalWrite (Eb, 0) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 1) ;
      digitalWrite (DP, 0) ;
      delay(1000);

    //09
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 1) ;
      delay(1000);

    //08
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 0) ;
      delay(1000);

    //07
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 1) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 1) ;
      digitalWrite (DP, 1) ;
      delay(1000);

    //06
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 1) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 0) ;
      delay(1000);

    //05
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 1) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 1) ;
      delay(1000);

    //04
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 1) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 1) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 0) ;
      digitalWrite (G, 0) ;
      digitalWrite (DP, 0) ;
      delay(1000);

    //03
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 0) ; 
      digitalWrite (DP, 1) ;
      delay(1000);

    //02
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 1) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 0) ; 
      digitalWrite (DP, 0) ;
      delay(1000);

    //01
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 1) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 1) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 1) ; 
      digitalWrite (DP, 1) ;
      delay(1000);

    digitalWrite(greenLight, 0);

  //7-seg-disp - RESET
    digitalWrite (Fb, 1) ;
    digitalWrite (Eb, 1) ;
    digitalWrite (A, 1) ;
    digitalWrite (B, 1) ;
    digitalWrite (C, 1) ;
    digitalWrite (D, 1) ;
    digitalWrite (E, 1) ;
    digitalWrite (F, 1) ;
    digitalWrite (G, 1) ;
    digitalWrite (DP, 1) ;
  
  //yellowLight
    digitalWrite(yellowLight, 1);
    //03
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 0) ; 
      digitalWrite (DP, 1) ;
    //Buzzer
      tone(buzzer, 1000);
        delay(500);
      noTone(buzzer);
        delay(500);

    //02
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 0) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 1) ;
      digitalWrite (D, 0) ;
      digitalWrite (E, 0) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 0) ; 
      digitalWrite (DP, 0) ;
    //Buzzer
      tone(buzzer, 1000);
        delay(500);
      noTone(buzzer);
        delay(500);

    //01
      digitalWrite (Fb, 1) ;
      digitalWrite (Eb, 1) ;
      digitalWrite (A, 1) ;
      digitalWrite (B, 0) ;
      digitalWrite (C, 0) ;
      digitalWrite (D, 1) ;
      digitalWrite (E, 1) ;
      digitalWrite (F, 1) ;
      digitalWrite (G, 1) ; 
      digitalWrite (DP, 1) ;
    //Buzzer
      tone(buzzer, 1000);
        delay(500);
      noTone(buzzer);
        delay(500);
    digitalWrite(yellowLight, 0);

  //7-seg-disp - RESET
    digitalWrite (Fb, 1) ;
    digitalWrite (Eb, 1) ;
    digitalWrite (A, 1) ;
    digitalWrite (B, 1) ;
    digitalWrite (C, 1) ;
    digitalWrite (D, 1) ;
    digitalWrite (E, 1) ;
    digitalWrite (F, 1) ;
    digitalWrite (G, 1) ;
    digitalWrite (DP, 1) ;
  
  //END...
  //Crush ko po si Bev... hehe~



}
