int counter = 0;

void setup() {
  // initialize external pin
  pinMode(9, OUTPUT);
  counter = 10;
}

void loop() {
  if (counter == 0) {
    digitalWrite(9, LOW);
    delay(70);
    digitalWrite(9, HIGH);
    delay(70);
  }
  else {
    digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(counter * 100);                       
    digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
    delay(counter * 100);                       
  
    counter--;
  }    
}
