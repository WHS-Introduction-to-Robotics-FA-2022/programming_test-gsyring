/*

*/

void setup() {
  pinMode(3,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(11,HIGH);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  digitalWrite(3,LOW);
  delay(1000);
}

void loop() {
  digitalWrite(11,LOW);
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(3,LOW);
  digitalWrite(11,HIGH);
  delay(200);
}
