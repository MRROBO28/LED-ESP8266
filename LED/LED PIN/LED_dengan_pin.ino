/*====================
 * Board : Nodemcu
 * Projects : LED Pin Nodemcu
 * Code by : MRROBO28
 *====================*/

//===== Define LED 
#define LED D0; //D0 = pin yang terpasang pada LED,Jika dengan pin maka lebih mudah dengan program #define

void setup (){
  pinMode(LED, OUTPUT);
}

void loop (){
  digitalWrite(LED,HIGH); //==> LED ON
  delay(1000);
  digitalWrite(LED,LOW); //LED OFF
  delay(1000);
}
