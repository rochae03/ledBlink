int ledPins[4] = { 24, 25, 3, 5 };

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  int potValue = analogRead(A14);  
  int brightness = map(potValue, 0, 1023, 0, 255); 
  for (int i = 0; i < 4; i++) {
    analogWrite(ledPins[i], brightness);  
    delay(500);
    analogWrite(ledPins[i], 0);  
    delay(500);
  }
}
