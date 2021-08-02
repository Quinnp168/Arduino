int buzz = 12;

void setup() {
pinMode(buzz,OUTPUT);
}

void loop() {
tone(buzz, 450);
delay(200);
noTone(buzz);
delay(175);
tone(buzz, 200);
delay(200);
noTone(buzz);
tone(buzz,425);
delay(200);
noTone(buzz);
delay(100);
tone(buzz,600);
delay(200);
noTone(buzz);
delay(50);
tone(buzz, 450);
delay(300);
noTone(buzz);
}
