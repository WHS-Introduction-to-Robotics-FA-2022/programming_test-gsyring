/*

*/
int inPin = A2;
int val;

void setup() {
   pinMode(inPin, INPUT);
   pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  val = analogRead(inPin);
  if (val >= 512){
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println(val, OCT);
  }
 
  else {
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println(val, OCT);
  }  
}
