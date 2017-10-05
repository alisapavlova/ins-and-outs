int speakerPin = 7;


void setup() {
  pinMode(speakerPin, OUTPUT);

}

void loop() {

for (int i = 0; i < 100 ; i+=1) {
  digitalWrite (speakerPin, HIGH);
  delayMicroseconds(3822);
  digitalWrite (speakerPin, LOW);
  delayMicroseconds(3822);
}
delay (25);
for (int i = 0; i < 100 ; i+=1) {
  digitalWrite (speakerPin, HIGH);
  delayMicroseconds(3404);
  digitalWrite (speakerPin, LOW);
  delayMicroseconds(3404);
}
delay (25);
for (int i = 0; i < 100 ; i+=1) {
  digitalWrite (speakerPin, HIGH);
  delayMicroseconds(3033);
  digitalWrite (speakerPin, LOW);
  delayMicroseconds(3033);
}
delay (25);
for (int i = 0; i < 100 ; i+=1) {
  digitalWrite (speakerPin, HIGH);
  delayMicroseconds(2863);
  digitalWrite (speakerPin, LOW);
  delayMicroseconds(2863);
}
delay (1000);
  }

