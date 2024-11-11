#include <Servo.h>

class Dog{
  private:
    Servo tlf, tlb, trf, trb;
    Servo mlf, mlb, mrf, mrb;
    Servo slf, slb, srf, srb;

  public:

    void begin(){
      tlf.attach(3);
      tlb.attach(9);
      trf.attach(6);
      trb.attach(12);
    
      mlf.attach(4);
      mlb.attach(13);
      mrf.attach(7);
      mrb.attach(10);
    
      slf.attach(5);
      slb.attach(11);
      srf.attach(8);
      srb.attach(2);
    
      //send the shoulders to the right positions
      slf.write(90);
      slb.write(90);
      srf.write(90);
      srb.write(85); 
    }

    

//////////////////////////////////////////////////////////////////////////////////////////////////////////////// walketh for walk function
  
  void walketh(String side){    
   // resetShoulders();              
    int tla = 180; //left top angle                                       
    int mla = 5; // left mid angle
    int tra = 0; // right top angle
    int mra = 175; // right mid angle
  
  //120° , 90° → 160° , 90°
    if(side=="r" or side=="right"){
    for(int i=11;i>1;i--){    //    120 , 90 > 160 , 90
      tla += 4;
      tra -= 4;                   
      tlb.write(tla-10);   
      trf.write(tra+15);
      delay(10);        
    }
   
    
  // 160° , 90° → 170° , 0°
    for(int i=5;i>1;i--){
      tla += 1;
      tra -= 1;
  
      
      mlb.write(mla);
      mrf.write(mra);
      
      mla -= 11;
      mra += 11;
  
      tlb.write(tla-10);
      trf.write(tra+15);
      
      delay(10);
    }
  
  // 170° , 0° → ~40° , 90°
    for(int i=15;i>1;i--){
      tla -= 5;
      tra += 5;
         
      mlb.write(mla);
      mrf.write(mra);
      mla += 6;
      mra -= 6;
  
      tlb.write(tla-10);
      trf.write(tra+15);
       
      delay(10);
    }
  
  // ~40° , 90° → 50° , 0°
    for(int i=5;i>1;i--){
      tla += 5;
      tra -= 5;
      tlb.write(tla-10);
      trf.write(tra+15);
      delay(10);
      }
    }
  
  
     else{ //why did i do this smh ¯\_(•_• )_/¯ 
      
  //120° , 90° > 160° , 90 °   
     for(int i=11;i>1;i--){
      tla += 4;
      tra -= 4;                   
      tlf.write(tla-15);   
      trb.write(tra+15);
      delay(10);        
    }
  
  // 160° , 90° → 170° , 0°
    for(int i=5;i>1;i--){
      tla += 1;
      tra -= 1;
      
      mlf.write(mla);
      mrb.write(mra);
      mla -= 11;
      mra += 11;
  
      tlf.write(tla-15);
      trb.write(tra+15);
      
      delay(10);
    }
  
  // 170°, 0° → ~40°, 90°
    for(int i=15;i>1;i--){
      tla -= 5;
      tra += 5;
      
      mlf.write(mla);
      mrb.write(mra);
      mla += 6;
      mra -= 6;
  
      tlf.write(tla-15);
      trb.write(tra+15);
          
      delay(10);
      }
  
  // ~40° , 90° → 50° , 0°
    for(int i=5;i>1;i--){
      tla += 5;
      tra -= 5;
      tlf.write(tla-15);
      trb.write(tra+15);
      delay(10);
      }
      
    }
  }
  
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  Walk
  // old walk loop
  void walk(){
     
    //check to see if its safe to walk
//    if(sensor1() > 35 && sensor2() > 35){
    walketh("r");    
    walketh("l");
//    digitalWrite(40,HIGH);
//   }
//   else{
//    digitalWrite(40,LOW);
   }
  
/*    Serial.print("Sensor 1: ");
    Serial.print(sensor1());//uses functions to get distance
    Serial.print(" cm     ");
    Serial.print("Sensor 2: ");
    Serial.print(sensor2());
    Serial.println(" cm");
*/  
 // }
  
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  Turn Right
  // 10/10/21
  void turnR(){
    
    slf.write(80);
    slb.write(80);
    srf.write(80);
    srb.write(75);
      
    for(int i = 2;i>1;i--){                  
    int tla = 170; //left top angle                                       
    int mla = 5; // left mid angle
    int tra = 10; // right top angle
    int mra = 175; // right mid angle
  
    
  //120° , 90° → 160° , 90°
    for(int i=11;i>1;i--){    //    120 , 90 > 160 , 90
      tla += 4;
      tra -= 4;                   
      tlb.write(tla-10);   
      trf.write(tra+15);
      delay(10);        
    }
   
    
  // 160° , 90° → 170° , 0°
    for(int i=5;i>1;i--){
      tla += 1;
      tra -= 1;
  
      
      mlb.write(mla);
      mrf.write(mra);
      
      mla -= 11;
      mra += 11;
  
      tlb.write(tla-10);
      trf.write(tra+15);
      
      delay(10);
    }
  
  // 170° , 0° → ~40° , 90°
    for(int i=15;i>1;i--){
      tla -= 5;
      tra += 5;
         
      mlb.write(mla);
      mrf.write(mra);
      mla += 6;
      mra -= 6;
  
      tlb.write(tla-10);
      trf.write(tra+15);
       
      delay(10);
    }
  
  // ~40° , 90° → 50° , 0°
    for(int i=5;i>1;i--){
      tla += 5;
      tra -= 5;
      tlb.write(tla-10);
      trf.write(tra+15);
      delay(10);
      }
  
      
  //120° , 90° > 160° , 90 °   
     for(int i=11;i>1;i--){
      tla += 4;
      tra -= 4;                   
      tlf.write(tla-15);   
      trb.write(tra+15);
      delay(10);        
    }
  
  // 160° , 90° → 170° , 0°
    for(int i=5;i>1;i--){
      tla += 1;
      tra -= 1;
      
      mlf.write(mla);
      mrb.write(mra+5);
      
      mla -= 11;
      mra += 11;
  
      tlf.write(tla-15);
      trb.write(tra+15);
      
      delay(10);
    }
  
  // 170°, 0° → ~40°, 90°
    for(int i=15;i>1;i--){
      tla -= 5;
      tra += 5;
      
      mlf.write(mla);
      mrb.write(mra+5);
      mla += 6;
      mra -= 6;
  
      tlf.write(tla-15);
      trb.write(tra+15);
          
      delay(10);
      }
  
  // ~40° , 90° → 50° , 0°
    for(int i=5;i>1;i--){
      tla += 5;
      tra -= 5;
      tlf.write(tla-15);
      trb.write(tra+15);
      delay(10);
      }
    }
  }
  
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  Turn Left (deg in multiple of 45)
  // 10/11/21
  void turnL(int degree){
    slf.write(100);
    slb.write(100);
    srf.write(100);
    srb.write(105);
  
    int times = degree / 2;
    
    for(times;times>1;times--){                
    int tla = 180; //left top angle                                       
    int mla = 15; // left mid angle
    int tra = 0; // right top angle
    int mra = 180; // right mid angle
  
    /*
    int tla = 180; //left top angle                                       
    int mla = 5; // left mid angle
    int tra = 0; // right top angle
    int mra = 175; // right mid angle
    */
    
  //120° , 90° → 160° , 90°
    for(int i=11;i>1;i--){    //    120 , 90 > 160 , 90
      tla += 4;
      tra -= 4;                   
      tlb.write(tla-10);   
      trf.write(tra+15);
      delay(10);        
    }
   
    
  // 160° , 90° → 170° , 0°
    for(int i=5;i>1;i--){
      tla += 1;
      tra -= 1;
  
      
      mlb.write(mla);
      mrf.write(mra);
      
      mla -= 11;
      mra += 11;
  
      tlb.write(tla-10);
      trf.write(tra+15);
      
      delay(10);
    }
  
  // 170° , 0° → ~40° , 90°
    for(int i=15;i>1;i--){
      tla -= 5;
      tra += 5;
         
      mlb.write(mla);
      mrf.write(mra);
      mla += 6;
      mra -= 6;
  
      tlb.write(tla-10);
      trf.write(tra+15);
       
      delay(10);
    }
  
  // ~40° , 90° → 50° , 0°
    for(int i=5;i>1;i--){
      tla += 5;
      tra -= 5;
      tlb.write(tla-10);
      trf.write(tra+15);
      delay(10);
      }
  
      
  //120° , 90° > 160° , 90 °   
     for(int i=11;i>1;i--){
      tla += 4;
      tra -= 4;                   
      tlf.write(tla-15);   
      trb.write(tra+15);
      delay(10);        
    }
  
  // 160° , 90° → 170° , 0°
    for(int i=5;i>1;i--){
      tla += 1;
      tra -= 1;
      
      mlf.write(mla);
      mrb.write(mra+5);
      
      mla -= 11;
      mra += 11;
  
      tlf.write(tla-15);
      trb.write(tra+15);
      
      delay(10);
    }
  
  // 170°, 0° → ~40°, 90°
    for(int i=15;i>1;i--){
      tla -= 5;
      tra += 5;
      
      mlf.write(mla);
      mrb.write(mra+5);
      mla += 6;
      mra -= 6;
  
      tlf.write(tla-15);
      trb.write(tra+15);
          
      delay(10);
      }
  
  // ~40° , 90° → 50° , 0°
    for(int i=5;i>1;i--){
      tla += 5;
      tra -= 5;
      tlf.write(tla-15);
      trb.write(tra+15);
      delay(10);
      }
    }
  }
  
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Walk Amount
  void walk(int distance){
    for(distance*=3;distance>0;distance--){
      walk();
    }
  }
  ///////////////////////////////////////////////////////
  void walkNS(int distance){
    for(distance*=3;distance>0;distance--){
      walketh("r");
      walketh("l");
    }
  }

};

Dog spot;

void setup() {
  // put your setup code here, to run once:
  spot.begin(); 
}

void loop() {
  // put your main code here, to run repeatedly:
  spot.walk();

}
