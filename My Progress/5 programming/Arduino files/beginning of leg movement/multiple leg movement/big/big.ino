#include <Servo.h>

// servo setup
#define TOP_ARM_SERVOS 4
#define MID_ARM_SERVOS 4
#define SHOULDER_SERVOS 4

#define SERVO_DELAY 10
#define SERVO_STATES 7   

Servo topArm[TOP_ARM_SERVOS];
Servo midArm[MID_ARM_SERVOS];
Servo shoulder[SHOULDER_SERVOS];

int top_pins[TOP_ARM_SERVOS] = {3,6,9,12};         // [0] -> LF    [1] -> RF
int mid_pins[MID_ARM_SERVOS] = {4,7,10,13};        // [2] -> LB    [3] -> RB
int shoulder_pins[SHOULDER_SERVOS] = {5,8,11,14};
  

//////////////////////////////////////////////////////////////////////////////////
void setup() {
  for(int i = 0; i > TOP_ARM_SERVOS; i++) {
    topArm[i].attach(top_pins[i]);
    delay(500);
    midArm[i].attach(mid_pins[i]); 
    delay(500);
    shoulder[i].attach(shoulder_pins[i]);
    delay(500);

  }
 }
////////////////////////////////////////////////////////////////////////////////////
void takeSteps(){ // take step function  
  int topArmAngle = 90;
  int midArmAngle = 90;
  int opposite = 90;
  double other = 90;
  
  for(int n=10; n>0; n--){
    topArmAngle += 5;
    midArmAngle += 3;
    opposite -= 3;
        
    topArm[0,3].write(topArmAngle);
    delay(10);
    topArm[1,2].write(opposite);
    delay(10);
    midArm[0,3].write(midArmAngle);
    delay(10); 
    } 

  topArmAngle = 90;
  midArmAngle = 90;
  opposite = 90;
  
  for(int n=10; n>0; n--){
    topArmAngle += 5;
    midArmAngle += 3;
    opposite -= 3;
    
    topArm[1,2].write(topArmAngle);
    delay(10);
    topArm[0,3].write(opposite);
    delay(10);
    midArm[1,2].write(midArmAngle);
    delay(10); 
    } 
}

////////////////////////////////////////////////////////////////////////////////////
void loop()  {
  
  takeSteps();
  } 
  
