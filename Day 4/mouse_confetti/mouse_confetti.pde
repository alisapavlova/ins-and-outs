void setup(){
  size (900,900);
  noStroke();
}
void draw() {
 //generate a random position near the mouse
 float x = mouseX + random(-30,30);
 float y = mouseY + random(-30,30);
 
 //create random values for r,g,b vars
  float r = random(255);
  float g = random(255);
  float b = random(255);
  
  //use those vsriables to set the fill color
  fill(r,g,b);
  
  //draw en elliple near mouse position
  ellipse(x,y,10,10);
}