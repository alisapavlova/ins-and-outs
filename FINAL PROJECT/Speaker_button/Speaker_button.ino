int speakerPin = 6; // digital pin to attatch speaker

int yPin = A0;  // analog joystick pin 
int buttonPin = 7; // digital joystick pin
int yPosition = 0;  // position of the joystick

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  
  pinMode(yPin, INPUT); // set pin as an input

  pinMode (speakerPin, OUTPUT); // set pin as an output

}

void loop() {

  yPosition = analogRead(yPin); // read the value from the joystick position
  
  Serial.println(yPosition);
  
  // when the position value is less than 200, meaning when the joystick is out of home position => make speaker beep
  if (yPosition < 200) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(100);
    digitalWrite (speakerPin, LOW);
    delayMicroseconds(100);
    
  }
}

