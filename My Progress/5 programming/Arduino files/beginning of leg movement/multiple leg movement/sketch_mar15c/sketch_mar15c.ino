#include <Servo.h>

Servo topArmLF, midArmLF, shoulderLF; // left front 
Servo topArmRF, midArmRF, shoulderRF; // right front
Servo topArmLB, midArmLB, shoulderLB; // left back 
Servo topArmRB, midArmRB, shoulderRB; // right back

int topArmLF = 2;
int midArmLF = 3;
int shoulderLF = 4;

int topArmRF = 5;
int midArmRF = 6;
int shoulderRF = 7;

int topArmLB = 8;
int midArmLB = 9;
int shoulderLB = 10;

int topArmRB = 11;
int midArmRB = 12;
int shoulderRB = 13;

void setup() {
  topArmLF.attach(topArmLF); // left front
  midArmLF.attach(midArmLF);
  shoulderLF.attach(shoulderLF);

  topArmRF.attach(topArmRF); //right front
  midArmRF.attach(midArmRF);
  shoulderRF.attach(shoulderRF);

  topArmLF.attach(topArmLF); // left back
  midArmLF.attach(midArmLF);
  shoulderLF.attach(shoulderLF);

  topArmLB.attach(topArmLB ); // right back
  midArmLB.attach(12);
  shoulderLB.attach(13);
  
}

void takeStep(Servo topArm, Servo midArm, Servo shoulder){ // walk left front
  int topArmAngle = 90;
  int midArmAngle = 90;
  
  for(int n=10; n>0; n--){
    topArmAngle += 5;
    midArmAngle += 3;
    return topArm.write(topArmAngle);
    delay(10);
    return midArm.write(midArmAngle);
    delay(10);  
  } 
}

void twoSteps(Servo topArm, Servo midArm, Servo shoulder, Servo topArm2, Servo midArm2, Servo shoulder2){
  int topArmAngle = 90;
  int midArmAngle = 90;
  
  for(int n=10; n>0; n--){
    topArmAngle += 5;
    midArmAngle += 3;
    return topArm.write(topArmAngle);
    delay(10);
    return topArm2.write(topArmAngle);
    delay(10);
    return midArm.write(midArmAngle);
    delay(10);  
    return midArm2.write(midArmAngle);
    delay(10);
  } 
}

void returnFoot(Servo topArm, Servo midArm, Servo shoulder){
  return midArm.write(45);
  delay(75);
  return topArm.write(90);
  delay(250);
  return midArm.write(90);
}

void returnFeet(Servo topArm, Servo midArm, Servo shoulder, Servo topArm2, Servo midArm2, Servo shoulder2){
  return midArm.write(45);
  delay(10);
  return midArm2.write(45);
  delay(75);
  
  return topArm.write(90);
  delay(10);
  return topArm2.write(90);
  delay(250);

  return midArm2.write(90);
  delay(10);
  return midArm.write(90);
}

void loop() {
  twoSteps(topArmLF,midArmLF,shoulderLF,topArmRB,midArmRB,shoulderRB);
  returnFeet(topArmLF,midArmLF,shoulderLF,topArmRB,midArmRB,shoulderRB);
}