
int ledPin = 7;
int buttonPin = 4;
int buttonState = 1;
void setup() {
pinMode (ledPin, OUTPUT);
pinMode(buttonPin, INPUT_PULLUP);
}


void loop() {

  int buttonState = digitalRead(buttonPin);

  if(buttonState == 0) {
    
  digitalWrite (ledPin, HIGH);
  delay(500);
  digitalWrite (ledPin, LOW);
  delay(500); 
  }

}
