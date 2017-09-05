void setup() {
  size(900,900);
  background(0);
}
void draw() {
  //draws 3 squares with height variable by mouseY
  
  fill (98,42,42);
  noStroke();
  float w = width/2;
  float h = mouseY;
  rect(0,0,w,h);
  
  fill (0,255,0);
  noStroke();
  rect(w,0,w,h);
  
  fill (255,0,0);
  noStroke();
  rect(0,h,w*2,h);
  
}