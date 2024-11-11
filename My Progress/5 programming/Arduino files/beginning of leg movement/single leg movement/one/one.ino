#include <Servo.h>

Servo tLF, tRB, tLB /*,tRF*/;

void setup(){
  tLF.attach(6);
  //tRF.attach(6);
  tLB.attach(9);
  tRB.attach(12);
}

void loop(){
  tLF.write(70);
  delay(250);
  tLB.write(70);
  delay(250);
  tRB.write(70);
  delay(250);
 // tRF.write(70);
  delay(500);
  
  
  tLF.write(110);
  delay(250);
  tLB.write(110);
  delay(250);
  tRB.write(110);
  delay(250);
 // tRF.write(110);
  delay(1000);
}
