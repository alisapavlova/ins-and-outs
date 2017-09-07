void setup(){
  size (900,900);
  noStroke();
 //frameRate(1);
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
  
  //determine which shape to draw
  int shapeChoice = int(random(0,3));
  println(shapeChoice);
  
  //logic
  if(shapeChoice == 0) {
    //draw a rectangle
    rect (x,y,10,10);
  }
  if(shapeChoice == 1) {
    //draw a ellipse
    ellipse(x,y,10,10);
  }
  
 if(shapeChoice == 2) {
    //draw a ellipse
    text("HEY!",x,y);
  }
}