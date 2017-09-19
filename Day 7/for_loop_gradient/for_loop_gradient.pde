//make a loop that creates vertical lines across the sketch

size(600,600);
background(255);
stroke(0);
strokeWeight(5);

for(int i=0; i < width; i+=5) { 
  float mappedColor = map(i,0,width,0,255); //change scale of i from 0-width to 0-255
  stroke(mappedColor,0,0);
 line(i,0,i,height);
}