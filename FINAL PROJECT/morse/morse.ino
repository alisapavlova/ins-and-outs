#include <Servo.h>

// create an instance of the Servo object
Servo y;
int servoYpin = 9;



// variables to store serial info
int valY = 90;


void setup() {

  Serial.begin(9600);

  // prep the servo for use
  y.attach(servoYpin);

  // calibrate position
  y.write(valY);
}

void loop() {


  if (Serial.available() > 1) {

    // read the incoming bytes
    valY = Serial.read();
    
  }

  // rotate the servo
  y.write(valY);

  delay(2);
}

