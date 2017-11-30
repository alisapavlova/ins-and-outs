import processing.serial.*;  // import serial library

Serial myPort;  // Create object from Serial class
int val;        // Data received from the serial port

// where to position the robot arm
int roboY;
int roboYspeed = 50;

void setup() {
  size(500, 250);
  // remember to set your serial port...
  printArray(Serial.list());
  String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);

  // basic drawing properties
  fill(255);
  noStroke();

  // starting parameters
  roboY = height/2;
}

void draw() {
  background(255, 0, 0);
  ellipse(width/2, roboY, 40, 40);
}

  void keyPressed() {

    if (key == 'a') {
      roboY += roboYspeed;
      if (roboY > height || roboY < 0) {
        // hit right side OR left side of screen
        roboYspeed *= -1;
      }
    }

    // map the values, since the servos want numbers
    // between 0 and 180
    int mappedY = int(map(roboY, 0, height, 45, 90));

    // write the info out the serial
    myPort.write(mappedY);  // for the arduino to read
  }