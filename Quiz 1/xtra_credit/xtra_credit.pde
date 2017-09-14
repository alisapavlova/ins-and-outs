//global variables
float x1Pos;
float y1Pos;
float x2Pos;
float y2Pos;
float d = 40;
float x1Speed = 4; //how fast is a pong ball moving
float y1Speed = 4;
float x2Speed = 4; //how fast is a pong ball moving
float y2Speed = 4;

float r1;
float g1;
float b1;

float r2;
float g2;
float b2;



void setup() {
  size(600, 400);
  background(0);
  noStroke();

  //position the ball
  x1Pos=width/2;
  y1Pos=height/2;
  x2Pos=width/2;
  y2Pos=height/2;
}
void draw() {
  background(0);
  r1=random(255);
  g1=random(255);
  b1=random(255);
  
  r2=random(255);
  g2=random(255);
  b2=random(255);

  //move the pong ball
  x1Pos = x1Pos + x1Speed;
  y1Pos = y1Pos + y1Speed;
  x2Pos = x2Pos - x2Speed;
  y2Pos = y2Pos - y2Speed;
  
  //1st ball
  if (x1Pos <= 0 + d/2) {
    x1Speed = x1Speed*(-1);
    fill (r1, g1, b1);
  }
  if (x1Pos >= width-d/2) {
    x1Speed = x1Speed*(-1);
    fill (r1, g1, b1);
  }

  if (y1Pos <= d/2) {
    y1Speed = y1Speed*(-1);
    fill (r1, g1, b1);
  }
  if (y1Pos >= height-d/2) {
    y1Speed = y1Speed*(-1);
    fill (r1, g1, b1);
  }

 //2d ball
  if (x2Pos <= 0 + d/2) {
    x2Speed = x2Speed*(-1);
    fill (r2, g2, b2);
  }
  if (x2Pos >= width-d/2) {
    x2Speed = x2Speed*(-1);
    fill (r2, g2, b2);
  }

  if (y2Pos <= d/2) {
    y2Speed = y2Speed*(-1);
    fill (r2, g2, b2);
  }
  if (y2Pos >= height-d/2) {
    y2Speed = y2Speed*(-1);
    fill (r2, g2, b2);
  }

  //draw the pong ball
  ellipse(x1Pos, y1Pos, d, d);
  ellipse(x2Pos, y2Pos, d, d);
}