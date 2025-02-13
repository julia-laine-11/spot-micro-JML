#ifndef SHCSR04_H
#define SHCSR04_H

#define SHCSR04_CM 0
#define SHCSR04_IN 1

class SHCSR04 {
  public:
    explicit SHCSR04() {};

    double read(uint8_t trigger, uint8_t echo, bool unit = SHCSR04_CM) {

      pinMode(trigger, OUTPUT);
      pinMode(echo, INPUT);
      
      digitalWrite(trigger, HIGH);
      pulseIn(trigger, LOW, 10);
      digitalWrite(trigger, LOW);

      return double(pulseIn(echo, HIGH)) / (58 + (unit * 90));
    }
};

#endif
