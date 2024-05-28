int outpin = 6;
int analogPin = A1;
int brillo;
int pot = 0;

void setup() {
  pinMode(outpin, OUTPUT);

}

void loop() {
  pot = analogRead(analogPin);
  brillo = map(pot, 0, 1023, 0, 255);
  analogWrite(outpin, brillo);
}
