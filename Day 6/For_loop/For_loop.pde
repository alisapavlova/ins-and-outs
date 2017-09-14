
  size(600,600);
 
  noFill();
  stroke(0);
  //for loop has 4 parts:1)initialization; 2)condition; 3)code; 4)incresement
  for (int i = 0; i < 1000; i++) {
  float x = random(width);
  float y=random(height);
  ellipse(x,y,10,10);
  }