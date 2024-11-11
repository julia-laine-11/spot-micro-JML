class Leg{
  
    private:    
      Servo top, mid, shoulder;

      //name pins for HCSR04
      #define trig1 A2
      #define trig2 A4
      #define echo1 A3
      #define echo2 A5

    public:
    void begin(String leg){ // begin command to call during setup(). This must be called every setup(), just as if it were Serial.begin() or wire.begin()
      // attaching servos to respective pins

      if(leg.equals("lf")){
        top.attach(3);
        mid.attach(4);
        shoulder.attach(5);
      }

      else if(leg.equals("rf")){
        top.attach(6);
        mid.attach(7);
        shoulder.attach(8);
      }

      else if(leg.equals("lb")){
        top.attach(9);
        mid.attach(13);
        shoulder.attach(11);
      }
      
      else if(leg.equals("rb")){
        top.attach(12);
        mid.attach(10);
        shoulder.attach(2);
      }


      Serial.begin(9600); //start communicating with serial monitor

      //set up lcd screen
      LiquidCrystal lcd(22, 24, 26, 28, 30, 32); // rs, enable, d4, d5, d6, d7
      
      lcd.begin(16,2); // where to start writing
      lcd.print("poop"); 
      lcd.setCursor(2,1); //start writing different place
      lcd.print("haha"); 
    
      //attach HCSR04 and assign i/o
      pinMode(trig1, OUTPUT);
      pinMode(trig2, OUTPUT);
      pinMode(echo1, INPUT);
      pinMode(echo2, INPUT);
    }

    
};
