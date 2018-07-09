// Needed Arduino Uno for best results
// connect pin 4 to a button to ground
// connect an LED to pin 7 and ground
int clicked = 0;
int timer = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(7,OUTPUT);
digitalWrite(7,LOW);
digitalWrite(4,HIGH);
Serial.begin(9600);
}

void loop() {
  delay(10);
 if (clicked == 1) {
  timer = timer+0.01;
  if(digitalRead(4)==LOW) {
    Serial.println(timer);
    digitalWrite(7,LOW);
    clicked = 0;
    }
  } else {
    if (random(1,1000)==1) {
      digitalWrite(7,HIGH);
      clicked=1;
      timer=0;
      }
    }
}
