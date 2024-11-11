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

String walk{(String top, String mid, String shoulder) // walk left front
  return String top.write(90);
  delay(250);
  return String mid.write(90);
  delay(250);

  int topArmLFAngle = 90;
  int midArmLFAngle = 90;
  
  for(int n=10; n>0; n--){
    topArmLFAngle += 5;
    midArmLFAngle += 3;
    return String top.write(topArmLFAngle);
    delay(10);
    return String mid.write(midArmLFAngle);
    delay(10);  
  }
  
  return String mid.write(45);
  delay(75);
}



void loop() {
  walk(topArmLF,midArmLF,shoulderLF);
}
