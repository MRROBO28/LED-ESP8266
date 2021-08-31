/*=======================================
 * Board : NodeMCU 
 * Project : Kontrol Led berpin  NodeMCU
 * Code by : MRROBO28
 ========================================*/

//===== Variabel LED
#define LED D0 // D0 = Pin LED,Jika berpin disarankan menggunakan #define karena leboh mudah
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);    // ==>LED ON
  delay(1000);               // ==>Jeda 1 detik
  digitalWrite(LED,LOW);     // ==>LED OFF
  delay(1000);
}
