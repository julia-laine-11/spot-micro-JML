#include <LiquidCrystal.h>
LiquidCrystal lcd(1,2,4,5,6,7);

int distanceCm, distanceInch;

const int trigPin = 39
const int echoPin = 40

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

  serial.begin(9600);

  lcd.begin(width,height of lcd screen);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(39, LOW);
  delayMicroseconds(2);

  digitalWrite(39, HIGH);
  delayMicroseconds(10);

  digitalWrite(39, LOW);

  duration = pulseIn(40,HIGH);

  distance = duration * .034/2 //distance cm

  lcd.cursor(0,0); // where to start writing
  lcd.print(DistanceCm);
}
