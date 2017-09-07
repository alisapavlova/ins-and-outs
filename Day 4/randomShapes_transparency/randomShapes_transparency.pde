void setup(){
  size (900,900);
  background(255,255,255);
  noStroke();
 //frameRate(1);
 
 //make sure everything is drawn from the center
 rectMode(CENTER);
 textAlign(CENTER,CENTER);
 textSize(40);
}

void draw() {
  fill(255,255,255,10);
  rect(width/2,height/2,width,height);
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