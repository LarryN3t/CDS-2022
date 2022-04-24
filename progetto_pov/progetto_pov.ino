/*
 * This Code demonstrate 
 * LED POV DISPLAY 
 * 
 * components used 
 * 1) Arduino Nano
 * 2) DC motor
 * 3) LEDs
 * 4) IR sensor
 * 5) Battery
 * 6) Wire
 * 
 * connect leds on 2 to 9 digital pin of Nano
 * IR sensor out pin connect on 10 digital pin of Nano
 * 
 * code written by Palak Mehta on March 29,2019
*/
////////////////////////design a pattern of display the number and alphabates//////////////////////////////// 

 int NUMBER9[]={1,1,1,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,1,1,1,1,1,1,1};
 int NUMBER8[]={0,1,1,0,1,1,1,0, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0};
 int NUMBER7[]={1,0,0,0,0,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,1,1,1,1,1, 1,1,1,0,1,0,0,0};
 int NUMBER6[]={1,1,1,1,1,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1};
 int NUMBER5[]={1,1,1,1,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1};
 int NUMBER2[]= {1,0,0,0,0,0,1,1, 1,0,0,0,0,1,0,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,0,0,0,1};
 int NUMBER1[]= {0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};
 int NUMBER0[]= {1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1};
 int NUMBER3[]= {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,0,0,0,0,0,0,0};
 int NUMBER4[]= {1,1,1,1,0,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1};

 int _[] = {0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};
 int A[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,1,1,1,1,1,1,1};
 int B[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0};
 int C[] = {0,0,1,1,1,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1};
 int D[] = {1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,0,0,0,0,1,0, 0,0,1,1,1,1,0,0};
 int E[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1};
 int F[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0};
 int G[] = {0,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0};
 int H[] = {1,1,1,1,1,1,1,1, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1};
 int I[] = {1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1};
 int J[] = {0,0,0,0,0,1,1,0, 0,0,0,0,1,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0};
 int K[] = {1,1,1,1,1,1,1,1, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1};
 int L[] = {1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1};
 int M[] = {1,1,1,1,1,1,1,1, 0,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1};
 int N[] = {1,1,1,1,1,1,1,1, 0,0,1,0,0,0,0,0, 0,0,0,1,1,0,0,0, 0,0,0,0,0,1,0,0, 1,1,1,1,1,1,1,1};
 int O[] = {0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,1,1,1,1,1,0};
 int P[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 0,1,1,0,0,0,0,0};
 int R[] = {1,1,1,1,1,1,1,1, 1,0,0,1,1,0,0,0, 1,0,0,1,0,1,0,0, 1,0,0,1,0,0,1,0, 0,1,1,0,0,0,0,1};
 int S[] = {0,1,1,1,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0};
 int T[] = {1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0};
 int U[] = {1,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0};
 int V[] = {1,1,1,1,1,1,0,0, 0,0,0,0,0,0,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,0,0};
 int W[] = {1,1,1,1,1,1,1,1, 0,0,0,0,0,0,1,0, 0,0,0,0,0,1,0,0, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,1,1};
 int X[] = {1,1,0,0,0,0,1,1, 0,0,1,0,0,1,0,0, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 1,1,0,0,0,0,1,1};
 int Q[] = {0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,1,0,1, 0,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1};
 int Y[] = {1,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,0,0,1,1,1,1,1, 0,0,1,0,0,0,0,0, 1,1,0,0,0,0,0,0};
 int Z[] = {1,0,0,0,0,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 1,0,1,0,0,0,0,1, 1,1,0,0,0,0,0,1};
 
 int* alpha[]= {A,B,C,D,E,F,G,H,I,J,K,L,M,N};//,T,U,V,W,X,Y,Z};
 int letterSpace;
 int delayTime;


 int pin[]={16,5,4,0,2,14,12,13};
 void setup()
 { 
         Serial.begin(9600);  
           for (int y=0; y<8; y++)
           {
           pinMode(pin[y], OUTPUT);
           }     
          letterSpace =4;// defining the space between the letters (ms)         
         delayTime =1;// defining the time dots appear (ms)
}


 void printLetter(int letter[])
 {
           int y;
          // printing the first y row of the letter
           for (y=0; y<8; y++)
           {
           digitalWrite(pin[y], letter[y]);
           }
           delay(delayTime);
          // printing the second y row of the letter
           for (y=0; y<8; y++)
           {
           digitalWrite(pin[y], letter[y+8]);
           }
           delay(delayTime);
          // printing the third y row of the letter
           for (y=0; y<8; y++)
           {
           digitalWrite(pin[y], letter[y+16]);
           }
           delay(delayTime);
           for(y = 0; y<8; y++) {
           digitalWrite(pin[y], letter[y+24]);
           }
           delay(delayTime);
          for(y = 0; y<8; y++) {
           digitalWrite(pin[y], letter[y+32]);
           }
           delay(delayTime);
           // printing the space between the letters
           for (y=0; y<8; y++)
           {
           digitalWrite(pin[y], 0);
           }
           delay(letterSpace);
 }


void stampacarattere (char carattere)
{
  if (carattere == 'A') {printLetter(A);}
  if (carattere == 'B') {printLetter(B);}
  if (carattere == 'C') {printLetter(C);}
  if (carattere == 'D') {printLetter(D);}
  if (carattere == 'E') {printLetter(E);}
  if (carattere == 'F') {printLetter(F);}
  if (carattere == 'G') {printLetter(G);}
  if (carattere == 'H') {printLetter(H);}
  if (carattere == 'I') {printLetter(I);}
  if (carattere == 'J') {printLetter(J);}
  if (carattere == 'K') {printLetter(K);}
  if (carattere == 'L') {printLetter(L);}
  if (carattere == 'M') {printLetter(M);}
  if (carattere == 'N') {printLetter(N);}
  if (carattere == 'O') {printLetter(O);}
  if (carattere == 'P') {printLetter(P);}
  if (carattere == 'Q') {printLetter(Q);}
  if (carattere == 'R') {printLetter(R);}
  if (carattere == 'S') {printLetter(S);}
  if (carattere == 'T') {printLetter(T);}
  if (carattere == 'U') {printLetter(U);}
  if (carattere == 'V') {printLetter(V);}
  if (carattere == 'W') {printLetter(W);}
  if (carattere == 'Z') {printLetter(Z);}
  if (carattere == 'Y') {printLetter(Y);}
  if (carattere == 'X') {printLetter(X);}
  if (carattere == '_') {printLetter(_);}
  if (carattere == '1') {printLetter(NUMBER1);}
  if (carattere == '2') {printLetter(NUMBER2);}
  if (carattere == '3') {printLetter(NUMBER3);}
  if (carattere == '4') {printLetter(NUMBER4);}
  if (carattere == '5') {printLetter(NUMBER5);}
  if (carattere == '6') {printLetter(NUMBER6);}
  if (carattere == '7') {printLetter(NUMBER7);}
  if (carattere == '8') {printLetter(NUMBER8);}
  if (carattere == '9') {printLetter(NUMBER9);}
  if (carattere == '0') {printLetter(NUMBER0);}
}
 void loop()
 {
    char frase[] = "_MANI_ABILI_";
    
    for(int y = 0; y<strlen(frase); y++) {
           stampacarattere(frase[y]);
           }
}
