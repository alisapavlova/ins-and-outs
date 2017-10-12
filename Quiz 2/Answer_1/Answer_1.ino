
int speakerPin = 7;
int potPin = 4;

void setup() {
Serial.begin (9600);  
pinMode (speakerPin, OUTPUT);

}

void loop() {

  int val = analogRead(potPin);
  int mappedVal = map(val, 0, 1023, 20, 1000);
  Serial.println(mappedVal);
  for (int i=0; i<100; i+=1) {  
  digitalWrite (speakerPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite (speakerPin, LOW);
  delayMicroseconds(1000); 
  }
delay (mappedVal);
}


