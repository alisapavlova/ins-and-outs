import processing.serial.*;  // import serial library

Serial myPort;  // Create object from Serial class
int val;        // Data received from the serial port

int roboX;
int roboY;
int roboXspeed;
int roboYspeed;

void setup()
{
  size(500, 500);
  // remember to set your serial port...
  printArray(Serial.list());
  String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);

  // basic drawing properties
  fill(255);
  noStroke();

  //starting parameters
  roboX=width/2;
  roboY=height/2;

  roboXspeed=int(random(3,6));
  roboYspeed=int(random(2,5));
}

void draw() {
  background(255, 0, 0);


  //pong code
  roboX += roboXspeed;
  roboY += roboYspeed;
  ellipse(roboX, roboY, 40, 40);
  if (roboX > width || roboX < 0) {
    roboXspeed *= -1;
  }
  if (roboY > height || roboY < 0) {
    roboYspeed *= -1;
  }

  int mappedX = int(map (roboX, 0, width, 0, 180));
  int mappedY = int(map (roboY, 0, height, 30, 120));

  myPort.write(mappedX);  // write x and y vars to serial
  myPort.write(mappedY);  // for the arduino to read
}