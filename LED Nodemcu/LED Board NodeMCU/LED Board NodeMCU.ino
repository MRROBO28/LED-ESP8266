/*=======================================
 * Board : NodeMCU 
 * Project : Kontrol Led yang ada di board NodeMCU
 * Code by : MRROBO28
 ========================================*/

//===== Variabel LED
int led = LED_BUILTIN; // Jika menggunakan led pada board maka menggunakan LED_BUILTIN
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
