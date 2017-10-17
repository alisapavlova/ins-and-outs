int led[] = {3, 4, 5, 6, 7, 8};
int buttonPin = 2;

void setup() {
  Serial.begin (9600);

  //loop through numbers o -> 5
  //turns this pins into output
  for (int i = 0; i < 6; i++) {
    pinMode(led[i], OUTPUT);
  }

  pinMode(buttonPin, INPUT_PULLUP);

}


void loop() {
  if (digitalRead(buttonPin ) == 0) {
    // randomize die
    int rando = random(6);
    Serial.println(rando);

//turns all leds off
for (int i = 0; i < 6; i++) {
      digitalWrite(led[i], LOW);
    }
    
    for (int i = 0; i <= rando; i++) {
      digitalWrite(led[i], HIGH);
    }
   
  }

}
