void setup() {
  fullScreen();
  background(0);
  noStroke();
}

void draw(){
  //create random values for r,g,b vars
  float r = random(255);
  float g = random(255);
  float b = random(255);
  
  //use those vsriables to set the fill color
  fill(r,g,b);
  
  //random location
  float x = random(width);
  float y = random(height);
  
  //random diameter
  float d=random(10,100);
  ellipse(x,y,d,d);
}