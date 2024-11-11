#include <LiquidCrystal.h>
#include <HCSR04.h>

// ultrasonic sensor setup
const int triggerPin = 13;
const int echoPin = 12;
UltraSonicDistanceSensor distanceSensor(triggerPin, echoPin);

long duration;

void setup() {  //   pin  pin 
    LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
    lcd.begin(16,2);
    lcd.print("hello");
    
    pinMode(triggerPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
    
    delay(1000);
  }
 

void loop()  {
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
  lcd.begin(16,2);
  lcd.clear();
  
  double distance = distanceSensor.measureDistanceCm();

  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/4;
  
  lcd.print(duration);

  delay(1000);
  
 
  }
