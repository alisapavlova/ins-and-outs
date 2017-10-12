void setup() {
  Serial.begin(9600);
}

void loop() {
  int myRand = random(10);
  Serial.println(myRand);

  delay(1000);
}
