#include <HCSR04.h>
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

void leftFront(){ // walk left front
  topArmLF.write(90);
  delay(250);
  midArmLF.write(90);
  delay(250);

  int topArmLFAngle = 90;
  int midArmLFAngle = 90;
  
  for(int n=10; n>0; n--){
    topArmLFAngle += 5;
    midArmLFAngle += 3;
    topArmLF.write(topArmLFAngle);
    delay(10);
    midArmLF.write(midArmLFAngle);
    delay(10);  
  }
  
  midArmLF.write(45);
  delay(75);
}

void leftBack(){ // walk left back
  topArmLB.write(90);
  delay(250);
  midArmLB.write(90);
  delay(250);

  int topArmLBAngle = 90;
  int midArmLBAngle = 90;
  
  for(int n=10; n>0; n--){
    topArmLBAngle += 5;
    midArmLBAngle += 3;
    topArmLB.write(topArmLBAngle);
    delay(10);
    midArmLB.write(midArmLBAngle);
    delay(10);  
  }
  
  midArmLB.write(45);
  delay(75);
}

void rightFront(){ // walk right front
  topArmRF.write(90);
  delay(250);
  midArmRF.write(90);
  delay(250);

  int topArmRFAngle = 90;
  int midArmRFAngle = 90;
  
  for(int n=10; n>0; n--){
    topArmRFAngle += 5;
    midArmRFAngle += 3;
    topArmRF.write(topArmRFAngle);
    delay(10);
    midArmRF.write(midArmRFAngle);
    delay(10);  
  }
  
  midArmRF.write(45);
  delay(75);
}

void rightBack(){ // walk right back
  topArmRB.write(90);
  delay(250);
  midArmRB.write(90);
  delay(250);

  int topArmRBAngle = 90;
  int midArmRBAngle = 90;
  
  for(int n=10; n>0; n--){
    topArmRBAngle += 5;
    midArmRBAngle += 3;
    topArmRB.write(topArmRBAngle);
    delay(10);
    midArmRB.write(midArmRBAngle);
    delay(10);  
  }
  
  midArmRB.write(45);
  delay(75);
}


void LFRB(){ // walk 2 legs at once (left front right back)
  
  topArmLF.write(90);
  delay(10); // since 10 is so small it will look as if they are moving at the same time (hopefully)
  topArmRB.write(90);
  delay(250);
  midArmLF.write(90);
  delay(10);
  midArmRB.write(90);
  delay(250);

  int topArmLFAngle = 90;
  int midArmLFAngle = 90;
  int topArmRBAngle = 90;
  int midArmRBAngle = 90;
  
  for(int n=10; n>0; n--){
    topArmLFAngle += 5;
    midArmLFAngle += 3;
    topArmRBAngle += 5;
    midArmRBAngle += 3;
    topArmLF.write(topArmLFAngle);
    delay(10);
    topArmRB.write(topArmRBAngle);
    delay(10);
    midArmLF.write(midArmLFAngle);
    delay(10);  
    midArmRB.write(midArmRBAngle);
    delay(10); 
  }
  
  midArmLF.write(45);
  delay(10);
  midArmRB.write(45);
  delay(75);
}

void RFLB(){ // walk 2 legs at once (left front right back)
  
  topArmLF.write(90);
  delay(10); // since 10 is so small it will look as if they are moving at the same time (hopefully)
  topArmRB.write(90);
  delay(250);
  midArmLF.write(90);
  delay(10);
  midArmRB.write(90);
  delay(250);

  int topArmRFAngle = 90;
  int midArmRFAngle = 90;
  int topArmLBAngle = 90;
  int midArmLBAngle = 90;
  
  for(int n=10; n>0; n--){
    topArmRFAngle += 5;
    midArmRFAngle += 3;
    topArmLBAngle += 5;
    midArmLBAngle += 3;
    topArmRF.write(topArmRFAngle);
    delay(10);
    topArmLB.write(topArmLBAngle);
    delay(10);
    midArmRF.write(midArmRFAngle);
    delay(10);  
    midArmLB.write(midArmLBAngle);
    delay(10); 
  }
  
  midArmRF.write(45);
  delay(10);
  midArmLB.write(45);
  delay(75);
}


void loop() {
  LFRB();
  RFLB();
}
