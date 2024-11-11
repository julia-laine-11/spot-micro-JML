#include <Servo.h>
Servo myservo;

int start = 90;
int armAngle = 110;

void setup() {
  myservo.attach(9);
  myservo.write(start);
  delay(500);
}


void loop() {
   // 110 -> 65
  myservo.write(110);
  for (int n=10; n>0;n--) { 
    myservo.write(armAngle);
    armAngle -= 5;
    delay(1000);
  }
  delay(1400000); // sit for 4 hours


  // 65 -> 140
  for (int n=15; n>0;n--) { // repeat this 15 times until it is 140
    armAngle += 5;
    myservo.write(armAngle);
    delay(1000); 
  }
  delay(1400000); // sit for 4 hours


  // return to beginning of loop
  for (int n=5; n>0;n--){
    armAngle -= 5;
    myServo.write(armAngle);
    delay(1000);
  }
  
    
  }
