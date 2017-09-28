int counter=0;
int buttonPin=8;
int prevButtonState=1;

void setup() {
  Serial.begin(9600);

  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {

  int buttonState = digitalRead(buttonPin);
 
//if button is being pressed 

if (buttonState==0 && prevButtonState==1) {
  Serial.println("Boom!");
}
prevButtonState = buttonState;
  
}
