#include <Servo.h>

// create an instance of the Servo object
Servo x;
Servo y;
int servoXpin = 10;
int servoYpin = 6;

int posX = 0;    // variable to store the servo position
int posY = 0;    // variable to store the other servo position

int valX=90;
int valY=90;

void setup() {
  // analog pins dont need to be set up

  Serial.begin(9600);
  
  // prep the servo for use
  x.attach(servoXpin);
  y.attach(servoYpin);

  x.write(valX);
  y.write(valY);
}

void loop() {
  
  if (Serial.available() > 1) {
 
    // read the incoming bytes
    valX = Serial.read();
    valY = Serial.read();
  }
 
  // "write" for a servo motor just tells it what angle to go to
  x.write(valX);
  y.write(valY);
  
  delay(2);
}
