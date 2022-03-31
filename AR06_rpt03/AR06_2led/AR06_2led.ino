/*
 예제 4.1
 LED 점멸
*/

const int ledA   =  3;
const int ledB   =  5;

int number = 1;
boolean flug = true;

void setup()
{
  Serial.begin(9600);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop()
{
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,LOW);
  delay(100 * number);
  digitalWrite(ledA,LOW);
  digitalWrite(ledB,HIGH);
  Serial.print("delay = ");
  Serial.print(100 * number);
  Serial.println(" msec");
  delay(100 * number);

  if (flug) {
    number++;
  } else {
    number--;
  }
  if (number >= 20) {
    flug = false;
  }
  else if (number == 1) {
    flug = true;
  }
}
