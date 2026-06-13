int irPin = 8;
int red = 13;
int count = 0;
int laststate = HIGH;
int lastPrintState = HIGH;

void setup() {  
  pinMode(irPin, INPUT_PULLUP);
  pinMode(red, OUTPUT);
  Serial.begin(9600);

}
void loop() {
  int currentstate = digitalRead(irPin);
  if (currentstate == LOW && laststate == HIGH) {
    count++;
    digitalWrite(red, HIGH);
    Serial.print("Count: ");
    Serial.println(count);
}
  
  if (currentstate == HIGH && lastPrintState == LOW) {
    digitalWrite(red, LOW);
    Serial.println("Enemy Is Far!");
}
  
  laststate = currentstate;
  lastPrintState = currentstate;

  delay(50);
}
delay(50);
}
