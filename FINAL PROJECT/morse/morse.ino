#include <Servo.h>

// create an instance of the Servo object
Servo y;
int servoYpin = 9; // digital pin to connect a servo

int dotDelay = 100;  // 1 time unit for Dot
int dashDelay = dotDelay * 3;  // 3 time units delay for Dash
int betweenCharDelay = dotDelay * 3; // delay between characters
int betweenWords = dotDelay * 7;  // 7 time units dalay between words
int down = 50; // position of the arm in degrees when it's pressing down
int up = 60;  // home position of the arm

// variable to store serial info
int valY = up;


void setup() {

  Serial.begin(9600);

  // prep the servo for use
  y.attach(servoYpin);

  // calibrate position
  y.write(valY);

}

void loop() {

  // check if there is any serial data available
  if (Serial.available() > 0) {
    
    String str = Serial.readStringUntil('\n');

    Serial.println(str);

    //reading and analyzing each character of the string
    for (int i = 0; i < str.length(); i++) {
      char myChar = str.charAt(i);  // a character variable from the string

      
      // further is the if statement for every letter, number, space, "." and ","
      if (myChar == 'a'|| myChar == 'A') {
        makeDot();
        makeDash();
      }
      if (myChar == 'b'|| myChar == 'B') {
        makeDash();
        makeDot();
        makeDot();
        makeDot();
      }
      if (myChar == 'c'|| myChar == 'C') {
        makeDash();
        makeDot();
        makeDash();
        makeDot();
      }
      if (myChar == 'd'|| myChar == 'D') {
        makeDash();
        makeDot();
        makeDot();
      }
      if (myChar == 'e'|| myChar == 'E') {
        makeDash();
      }
      if (myChar == 'f' || myChar == 'F') {
        makeDot();
        makeDot();
        makeDash();
        makeDot();
      }
      if (myChar == 'g'|| myChar == 'G') {
        makeDash();
        makeDash();
        makeDot();
      }
      if (myChar == 'h' || myChar == 'H') {
        makeDot();
        makeDot();
        makeDot();
        makeDot();
      }
      if (myChar == 'i'|| myChar == 'I') {
        makeDot();
        makeDot();
      }
      if (myChar == 'j'|| myChar == 'J') {
        makeDot();
        makeDash();
        makeDash();
        makeDash();
      }
      if (myChar == 'k'|| myChar == 'K') {
        makeDash();
        makeDot();
        makeDash();
      }
      if (myChar == 'l'|| myChar == 'L') {
        makeDot();
        makeDash();
        makeDot();
        makeDot();
      }
      if (myChar == 'm'|| myChar == 'M') {
        makeDash();
        makeDash();
      }
      if (myChar == 'n' || myChar == 'N') {
        makeDash();
        makeDot();
      }
      if (myChar == 'o'|| myChar == 'O') {
        makeDash();
        makeDash();
        makeDash();
      }
      if (myChar == 'p'|| myChar == 'P') {
        makeDot();
        makeDash();
        makeDash();
        makeDot();
      }
      if (myChar == 'q'|| myChar == 'Q') {
        makeDash();
        makeDash();
        makeDot();
        makeDash();
      }
      if (myChar == 'r'|| myChar == 'R') {
        makeDot();
        makeDash();
        makeDot();
      }
      if (myChar == 's'|| myChar == 'S') {
        makeDot();
        makeDot();
        makeDot();
      }
      if (myChar == 't'|| myChar == 'T') {
        makeDash();
      }
      if (myChar == 'u'|| myChar == 'U') {
        makeDot();
        makeDot();
        makeDash();
      }
      if (myChar == 'v'|| myChar == 'V') {
        makeDot();
        makeDot();
        makeDot();
        makeDash();
      }
      if (myChar == 'w'|| myChar == 'W') {
        makeDot();
        makeDash();
        makeDash();
      }
      if (myChar == 'x'|| myChar == 'X') {
        makeDash();
        makeDot();
        makeDot();
        makeDash();
      }
      if (myChar == 'y'|| myChar == 'Y') {
        makeDash();
        makeDot();
        makeDash();
        makeDash();
      }
      if (myChar == 'z'|| myChar == 'Z' ) {
        makeDash();
        makeDash();
        makeDot();
        makeDot();
      }
      if (myChar == '1') {
        makeDot();
        makeDash();
        makeDash();
        makeDash();
        makeDash();
      }
      if (myChar == '2') {
        makeDot();
        makeDot();
        makeDash();
        makeDash();
        makeDash();
      }
      if (myChar == '3') {
        makeDot();
        makeDot();
        makeDot();
        makeDash();
        makeDash();
      }
      if (myChar == '4') {
        makeDot();
        makeDot();
        makeDot();
        makeDot();
        makeDash();
      }
      if (myChar == '5') {
        makeDot();
        makeDot();
        makeDot();
        makeDot();
        makeDot();
      }
      if (myChar == '6') {
        makeDash();
        makeDot();
        makeDot();
        makeDot();
        makeDot();
      }
      if (myChar == '7') {
        makeDash();
        makeDash();
        makeDot();
        makeDot();
        makeDot();
      }
      if (myChar == '8') {
        makeDash();
        makeDash();
        makeDash();
        makeDot();
        makeDot();
      }
      if (myChar == '9') {
        makeDash();
        makeDash();
        makeDash();
        makeDash();
        makeDot();
      }
      if (myChar == '0') {
        makeDash();
        makeDash();
        makeDash();
        makeDash();
        makeDash();
      }

      if (myChar == ' ') {
        delay(betweenWords);
      }

      if (myChar == '.') {
        makeDot();
        makeDash();
        makeDot();
        makeDash();
        makeDot();
        makeDash();
      }
      if (myChar == ',') {
        makeDash();
        makeDash();
        makeDot();
        makeDot();
        makeDash();        
        makeDash();
      }

      delay(betweenCharDelay); // inserts delay between characters

    }
  }
}


// dot "movement" code
void makeDot() {
  y.write(down);
  delay(dotDelay);
  y.write(up);
  delay(dotDelay);
}

//dash "movement" code
void makeDash() {
  y.write(down);
  delay(dashDelay);
  y.write(up);
  delay(dotDelay);

}

