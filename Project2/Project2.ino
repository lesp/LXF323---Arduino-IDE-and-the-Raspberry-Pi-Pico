int led = 16;
int button = 15;
int buttonState = 0;
int lastButtonState = 0;
bool ledState = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}
void loop() {
  buttonState = digitalRead(button);
  if (buttonState == LOW && lastButtonState == HIGH) {
    ledState = !ledState;
    digitalWrite(led, ledState);
  }
  lastButtonState = buttonState;
  delay(50);
}
