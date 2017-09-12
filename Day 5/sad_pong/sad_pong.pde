//global variables
float xPos;
float yPos;
float d = 40;
float xSpeed = 4; //how fast is a pong ball moving
float ySpeed = 4;


void setup() {
  size(600, 400);
  background(0);
  noStroke();

  //position the ball
  xPos=width/2;
  yPos=height/2;
}
void draw() {
  background(0);

float r=random(255);
float g=random(255);
float b=random(255);
  //move the pong ball
  xPos = xPos + xSpeed;
  yPos = yPos + ySpeed;

  //if pong ball hitts the right side of the screen
  if (xPos >= d/2) {
    xSpeed = xSpeed*(-1);
  }
  if (xPos <= width-d/2) {
    xSpeed = xSpeed*(-1);
  }

  if (yPos >= d/2) {
    ySpeed = ySpeed*(-1);
  }
  if (yPos <= height-d/2) {
    ySpeed = ySpeed*(-1);
  }
if (xPos == d/2) {
  fill(r,g,b);
}
  if (xPos == width-d/2) {
  fill(r,g,b);
  }
  if (yPos == d/2) {
  fill(r,g,b);
  }
  if (yPos == height-d/2) {
  fill(r,g,b);
  }
  //draw the pong ball

  ellipse(xPos, yPos, d, d);
}