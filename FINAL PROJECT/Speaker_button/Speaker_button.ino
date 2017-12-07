int speakerPin = 6;

int yPin = A0;
int buttonPin = 7;
int yPosition = 0;
void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  
  pinMode(yPin, INPUT);

  pinMode (speakerPin, OUTPUT);
}

void loop() {

  yPosition = analogRead(yPin);
Serial.println(yPosition);
  if (yPosition < 200) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(100);
    digitalWrite (speakerPin, LOW);
    delayMicroseconds(100);
    
  }
}

