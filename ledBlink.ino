
int ledPin = 24
int ledPin2 = 25

  void
  setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT)
  pinMode(ledPin2, OUTPUT)
  
}

void loop() {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(500);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
}
