#define buzzer 10 //was 5

void setup() {
  // put your setup code here, to run once:
 pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(100);

}
