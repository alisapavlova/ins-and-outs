void setup(){
  size(500,500);
}

void draw(){
 
  //if mouse is on the right side of the screen
  if(mouseX > width/2) {
    background(255,0,0); //red bg
  } else { background(random(255)); }
  line(width/2,0,width/2,height);
}