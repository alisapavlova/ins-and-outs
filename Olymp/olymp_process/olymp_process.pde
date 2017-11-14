import processing.serial.*;  // import serial library
 
Serial myPort;  // Create object from Serial class
int val;        // Data received from the serial port

// where to position the robot arm
int roboX;
int roboY;
int roboXspeed;
int roboYspeed;

void setup(){
  size(1000, 500);
  // remember to set your serial port...
  printArray(Serial.list());
  String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);
 
  // basic drawing properties
  fill(255);
  noStroke();
  
  // starting parameters
  roboX = width/2;
  roboY = height/2;
  roboXspeed = 2;
  roboYspeed = 7;
}
 
void draw() {
  background(255,0,0);
  
  // pong code
  roboX += roboXspeed;
  roboY += roboYspeed;
  
  
  ellipse(roboX, roboY, 40, 40);
  
  if(roboX > width || roboX < 0) {
    // hit right side OR left side of screen
    roboXspeed *= -1;
  }
  if(roboY > 250|| roboY < 0) {
    // hit right side OR left side of screen
    roboYspeed *= -1;
  }
  
  // map the values, since the servos want numbers
  // between 0 and 180
  int mappedX = int(map(roboX, 0, width, 30,150));
  int mappedY = int(map(roboY, 0, height, 80, 100));
  
  println(mappedX, mappedY);
 
  // write the info out the serial
  myPort.write(mappedY);  // write x and y vars to serial
  myPort.write(mappedX);  // for the arduino to read
}