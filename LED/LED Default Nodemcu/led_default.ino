/*====================
 * Board : Nodemcu
 * Projects : LED default Nodemcu
 * Code by : MRROBO28
 *====================*/

//===== Variabel LED default
int LED = LED_BUILTIN; //Jika default menggunakan LED_BUILTIN

void setup (){
  pinMode(LED, OUTPUT);
}

void loop (){
  digitalWrite(LED,HIGH); //==> LED ON
  delay(1000);
  digitalWrite(LED,LOW); //LED OFF
  delay(1000);

  //Kalian bisa ganti program yang ada di void loop sesuai dengan kebutuhan kalian
}
