int potPin = 4;
int speakerPin = 7;

void setup() {
  Serial.begin(9600);
  pinMode (speakerPin, OUTPUT);
}

void loop() {
 int val = analogRead(potPin);
 Serial.println(val);

 digitalWrite(speakerPin, HIGH);
 delay(val);
 digitalWrite(speakerPin, LOW);
 delay(val);

}
