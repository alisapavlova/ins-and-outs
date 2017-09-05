void setup() {
  size(900,900);
  background (0); //black background
}
void draw() {
  //draw the menu
  background (0);
  fill(255,0,0);
  noStroke();
  //create variable "x" which is of type float, which means it has a decimal point,
  // then use the equal sign to give is a value
  float x = .1*width; 
  float y = .2*height;
  float w = .25*width;
  float h = .5*width;
  
  //rect(50,100,125,250);
  rect(x,y,w,h);
}