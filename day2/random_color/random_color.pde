void setup(){
 size(600,600);
 background(0);
 frameRate(5);
 strokeWeight (4);
  stroke(255,0,0);
}

//draw happens repeatedly after setup
void draw() {
  //if put in background in the beggining of the loop then it will cover up
  // what has been drawn before
  background(0);
  
  //random(255) chooses random color)
fill(random(255),random(255),random(255));

ellipse(width/2,height/2,mouseX,mouseY);

}