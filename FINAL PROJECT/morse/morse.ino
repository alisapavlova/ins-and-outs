#include <Servo.h>

// create an instance of the Servo object
Servo y;
int servoYpin = 9;

int dotDelay = 100;
int dashDelay = dotDelay * 3;
int betweenCharDelay = dotDelay * 3;
int betweenWords = dotDelay * 7;
int down = 45;
int up = 65;




// variables to store serial info
int valY = up;


void setup() {

  Serial.begin(9600);

  // prep the servo for use
  y.attach(servoYpin);

  // calibrate position
  y.write(valY);


}

void loop() {


  if (Serial.available() > 0) {

    String str = Serial.readStringUntil('\n');

    Serial.println(str);

    for (int i = 0; i < str.length(); i++) {
      char myChar = str.charAt(i);

      if (myChar == 'a') {
        makeDot();
        makeDash();
      }
      if (myChar == 'b') {
        makeDash();
        makeDot();
        makeDot();
        makeDot();
      }
      if (myChar == 'c') {
        makeDash();
        makeDot();
        makeDash();
        makeDot();
      }
      if (myChar == 'd') {
        makeDash();
        makeDot();
        makeDot();
      }
      if (myChar == 'e') {
        makeDash();
      }
      if (myChar == 'f') {
        makeDot();
        makeDot();
        makeDash();
        makeDot();
      }
      if (myChar == 'g') {
        makeDash();
        makeDash();
        makeDot();
      }
      if (myChar == 'h') {
        makeDot();
        makeDot();
        makeDot();
        makeDot();
      }
      if (myChar == 'i') {
        makeDot();
        makeDot();
      }
      if (myChar == 'j') {
        makeDot();
        makeDash();
        makeDash();
        makeDash();
      }
      if (myChar == 'k') {
        makeDash();
        makeDot();
        makeDash();
      }
      if (myChar == 'l') {
        makeDot();
        makeDash();
        makeDot();
        makeDot();
      }
      if (myChar == 'm') {
        makeDash();
        makeDash();
      }
      if (myChar == 'n') {
        makeDash();
        makeDot();
      }
      if (myChar == 'o') {
        makeDash();
        makeDash();
        makeDash();
      }
      if (myChar == 'p') {
        makeDot();
        makeDash();
        makeDash();
        makeDot();
      }
      if (myChar == 'q') {
        makeDash();
        makeDash();
        makeDot();
        makeDash();
      }
      if (myChar == 'r') {
        makeDot();
        makeDash();
        makeDot();
      }
      if (myChar == 's') {
        makeDot();
        makeDot();
        makeDot();
      }
      if (myChar == 't') {
        makeDash();
      }
      if (myChar == 'u') {
        makeDot();
        makeDot();
        makeDash();
      }
      if (myChar == 'v') {
        makeDot();
        makeDot();
        makeDot();
        makeDash();
      }
      if (myChar == 'w') {
        makeDot();
        makeDash();
        makeDash();
      }
      if (myChar == 'x') {
        makeDash();
        makeDot();
        makeDot();
        makeDash();
      }
      if (myChar == 'y') {
        makeDash();
        makeDot();
        makeDash();
        makeDash();
      }
      if (myChar == 'z') {
        makeDash();
        makeDash();
        makeDot();
        makeDot();
      }
      if (myChar == ' ') {
        delay(betweenWords);
      }

      delay(betweenCharDelay);

    }
  }


}

     

void makeDot() {
  y.write(down);
  delay(dotDelay);
  y.write(up);
  delay(dotDelay);
}

void makeDash() {
  y.write(down);
  delay(dashDelay);
  y.write(up);
  delay(dotDelay);

}

