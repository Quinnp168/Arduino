int LED[] = {13, 12 11};

void setup() {
  pinMode(LED[0],OUTPUT);
  pinMode(LED[1],OUTPUT);
  pinMode(LED[2],OUTPUT);
}

void loop() {
digitalWrite(LED[0],HIGH);
digitalWrite(LED[2],LOW);
delay(200);
digitalWrite(LED[0],LOW);
digitalWrite(LED[1],HIGH);
delay(200);
digitalWrite(LED[1],LOW);
digitalWrite(LED[2],HIGH);
delay(200);
}
