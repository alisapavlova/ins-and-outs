//setup happens ONCE
void setup(){
 size(600,600);
 background(0);
 stroke(255,255,0);
 strokeWeight(2);

}

//draw happens repeatedly after setup
void draw() {
   background(0);
  line(0,height/2,mouseX,mouseY);
  line(width/2,0,mouseX,mouseY);
    line(600,height/2,mouseX,mouseY);
  line(width/2,600,mouseX,mouseY);
  
  //lines from corners
  line(0,0,mouseX,mouseY);
  line(600,0,mouseX,mouseY);
    line(0,600,mouseX,mouseY);
  line(600,600,mouseX,mouseY);
  
  //circcles in corners
  ellipse(0,0,mouseX,mouseY);
  ellipse(0,600,mouseX,mouseY);
  ellipse(600,0,mouseX,mouseY);
  ellipse(600,600,mouseX,mouseY);

}