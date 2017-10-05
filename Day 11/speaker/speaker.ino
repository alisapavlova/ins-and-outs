int speakerPin = 7;


void setup() {
  pinMode(speakerPin, OUTPUT);

}

void loop() {

for (int i = 0; i < 100 ; i+=1) {
  digitalWrite (speakerPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite (speakerPin, LOW);
  delayMicroseconds(1000);
}
delay (50);
for (int i = 0; i < 100 ; i+=1) {
  digitalWrite (speakerPin, HIGH);
  delayMicroseconds(3000);
  digitalWrite (speakerPin, LOW);
  delayMicroseconds(3000);
}
delay (50);;
  }

