#include <Servo.h>

Servo topArmLF, midArmLF, shoulderLF; // left front 
Servo topArmRF, midArmRF, shoulderRF; // right front
Servo topArmLB, midArmLB, shoulderLB; // left back 
Servo topArmRB, midArmRB, shoulderRB; // right back


void setup() {
  topArmLF.attach(2); // left front
  midArmLF.attach(3);
  shoulderLF.attach(4);

  topArmRF.attach(5); //right front
  midArmRF.attach(6);
  shoulderRF.attach(7);

  topArmLF.attach(8); // left back
  midArmLF.attach(9);
  shoulderLF.attach(10);

  topArmLB.attach(11); // right back
  midArmLB.attach(12);
  shoulderLB.attach(13);
  
}

void twoSteps(String side){
  int topArmAngle = 90;
  int midArmAngle = 90;

  if(return side) == "left"{
   for(int n=10; n>0; n--){
     topArmAngle += 5;
     midArmAngle += 3;
     topArmLF.write(topArmAngle);
     delay(10);
     topArmRB.write(topArmAngle);
     delay(10);
     midArmLF.write(midArmAngle);
     delay(10);  
     midArmRB.write(midArmAngle);
     delay(10);
     }
   }  else  {
    for(int n=10; n>0; n--){
      topArmAngle += 5;
      midArmAngle += 3;
      topArmRF.write(topArmAngle);
      delay(10);
      topArmLB.write(topArmAngle);
      delay(10);
      midArmRF.write(midArmAngle);
      delay(10);  
      midArmLB.write(midArmAngle);
      delay(10);
      }
    } 
}


void loop() {
  delay(5000);
}
