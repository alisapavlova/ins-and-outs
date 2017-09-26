int counter=0;
int buttonPin=8;

void setup() {
  Serial.begin(9600);

  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {

  int buttonState = digitalRead(buttonPin);
 
  
//if button is being pressed  
if (buttonState==0) {
  Serial.println(counter++);
}

  
}
