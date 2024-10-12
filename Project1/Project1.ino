int led = 16;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(led, HIGH);
  Serial.println("LED ON");
  delay(100);
  digitalWrite(led, LOW);
  Serial.println("LED OFF");
  delay(100);
}
