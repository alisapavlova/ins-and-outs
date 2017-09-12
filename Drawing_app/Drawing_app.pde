//global variables go here
int drawMode=1;
//draw modes will be:
//1=ellipse
//2=rectangle
float brushSize = 10;

void setup(){
  fullScreen();
  background(255);
  noStroke();
  rectMode(CENTER);
  frameRate(120);
  textSize(40);
  
    
  //color hint - color of letter corresponds to key to press for color
fill(255,0,0);
  text("R",10,50);//red
  fill(0,255,0);
  text("G",10,100);//green
  fill(0,0,255);
  text("B",10,150);//blue
  fill(255,255,0);
  text("Y",10,200);//yellow
  fill(173,41,240);
  text("V",10,250);//violet
  fill(255,167,3);
  text("O",10,300);//orange
  fill(0,255,255);
  text("C",10,350);//cyan
  fill(255,142,234);
  text("P",10,400);//pink
  fill(0);
  text("X",10,450);//black
  }

void draw(){

  if (mousePressed) {
 //what drawmode are we in?
 if (drawMode == 1) {ellipse (mouseX,mouseY,brushSize,brushSize);}
 if (drawMode == 2) {rect(mouseX,mouseY,brushSize,brushSize);}
  }
}

//handles keyboard input
void keyPressed() {

  if(key == '!') {drawMode=1;} //Shift+1 draws circle
  if(key == '@') {drawMode=2;} //Shift+2 draws rectangle
//colors  
if(key =='r') {fill(255,0,0);} //red
    if(key =='g') {fill(0,255,0);} //green
    if(key =='b') {fill(0,0,255);} //blue
    if(key == 'w') {fill(255);} //white
    if(key == 'y') {fill(255,255,0);} //yellow
    if(key == 'v') {fill(173,41,240);} //violet
    if(key == 'o') {fill(255,167,3);} //orange
    if(key == 'c') {fill(0,255,255);} //cyan
    if(key == 'p') {fill(255,142,234);} //pink
    if(key =='x') {fill(0);} //black
    
    if(keyCode == BACKSPACE) {setup();} //erase
    
  if(key =='1') {brushSize=10;}
  if(key =='2') {brushSize=20;}
  if(key =='3') {brushSize=30;}
  if(key =='4') {brushSize=40;}
  if(key =='5') {brushSize=50;}
  if(key =='6') {brushSize=60;}
  if(key =='7') {brushSize=70;}
  if(key =='8') {brushSize=80;}
  if(key =='9') {brushSize=90;}
}