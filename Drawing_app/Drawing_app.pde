//global variables go here
int drawMode=1;
//draw modes will be:
//1=ellipse
//2=text
float brushSize = 10;

void setup(){
  size(500,500);
  background(255);
  noStroke();
}

void draw(){
  fill(0);
  if (mousePressed) {
 //what drawmode are we in?
 if (drawMode == 1) {ellipse (mouseX,mouseY,brushSize,brushSize);}
 if (drawMode == 2) {text("Hello",mouseX,mouseY);}
  }
}

//handle keyboard input
void keyPressed() {
  //if the key pressed is 1 drawMode is 1
  if(key == '1') {drawMode=1;}
  if(key == '2') {drawMode=2;}
//colors  
if(key =='r') {fill(255,0,0);}
    if(key =='g') {fill(0,255,0);}
    if(key =='b') {fill(0,0,255);}
  if(key =='x') {brushSize=30;}
  if(key =='z') {brushSize=10;}
}