
void setup() {
  fullScreen();
  background(255);
  strokeWeight(5);
}

void draw() {
  float r=random(255);
  float g=random(225);
  float b=random(255);

  float x1=random(width);
  float y1=random(height);
  float x2=random(width);
  float y2=random(height);
 if (mouseY<height/2) {
   stroke(r,g,b);
   line(x1,y1,x2,y2);
 }
}