#include <Servo.h>

//cerate an instant of a Servo object
Servo base1;
Servo base2;

int potPin1 = 5;
int potPin2 = 4;
int basePin1 = 9;
int basePin2 = 10;

void setup() {


  Serial.begin (9600);

  //prep the servo for use
  base1.attach(basePin1);
  base2.attach(basePin2);
}

void loop() {
  // read potentiometer and store to val
  int val1 = analogRead(potPin1);
  int val2 = analogRead(potPin2);

  //covvert the rate to 0-180;
  val1 = map(val1, 0, 1023, 0, 180);
  val2 = map(val2, 0, 1023, 0, 180);
  Serial.println(val1, val2);

  //rotate the servo
  base1.write(val1);
  base2.write(val2);

  delay (10);
}
