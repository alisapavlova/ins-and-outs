void setup() {
  size(600, 600);
  noStroke();
}

void draw() {
  background(255);
  if (mouseX>0 && mouseY>0) { //avoid zeros
  
  //loop through both x and y
    for (int x=0; x < width; x += mouseX) { 
      for (int y=0; y < height; y += mouseY) {
        
    //create scaled red and blue color
        float mapRed = map(x, 0, width, 0, 255);
        float mapBlue = map(y, 0, height, 0, 255);
        
        fill(mapRed, 0, mapBlue);
        rect (x, y, mouseX, mouseY);
      }
    }
  }
}