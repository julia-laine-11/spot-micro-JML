void stand(){
  mlf.write(90);
  mrf.write(90);
  delay(10);
  tlf.write(120);
  trf.write(60); 
  delay(1000);
  
  mlb.write(90);
  mrb.write(90);
  delay(10);
  tlb.write(120);
  trb.write(60);
   
  delay(1000);
}

void sit(){
  mrb.write(175);
  mlb.write(0);
  delay(10);
  tlb.write(175);
  trb.write(0);
  delay(1000);

  trf.write(0);
  tlf.write(175);
  delay(10);
  mrf.write(175);
  mlf.write(0);
  
  delay(5000);  
}
//////////////////////////////////////////////////////////////////////////////////////////////

void walkRF(int amt){
  int tla = 120; //left top angle
  int mla = 90; // left mid angle
  
  int tra = 60; // right top angle
  int mra = 90; // right mid angle

  int otla = 120;
  int otra = 60;

  int omra = 90;
  int omla = 90;

  int two = amt;
  
  for(amt; 1 < amt; amt--){
    tlf.write(tla);         // RIGHT forward
    trb.write(tra);    
    delay(3);           
    mlf.write(mla);     
    mrb.write(mra);     
    delay(3);           
                                   
    trf.write(otra);    
    tlb.write(otla);    
    delay(3);           
    mrf.write(omra);    
    mlb.write(omla);    
    delay(3);        
          
    tla += 3;
    tra -= 3;
    otla -= 3;
    otra += 3;
    
    delay(10);
  } // end first for loop

  for(two; 1 < two; two--){
   tla -= 3;
   tra += 3;

   otla += 3;
   otra -=3;
        
   tlf.write(tla);          // back to CENTER
   trb.write(tra);     
   delay(3);           
   mlf.write(mla);     
   mrb.write(mra);     
   delay(3);           
                                        
   trf.write(otra);    
   tlb.write(otla);    
   delay(3);           
   mrf.write(omra);    
   mlb.write(omla);    
   delay(3);  
   
   delay(15);
   
  } // end first for loop

} //end walkR

//////////////////////////////////////////////////////////////////////////////////////////////
void walkLF(int amt){
  int tla = 120; //left top angle
  int mla = 90; // left mid angle
  
  int tra = 60; // right top angle
  int mra = 90; // right mid angle

  int otla = 120;
  int otra = 60;

  int omra = 90;
  int omla = 90;

  int two = amt;
  int three = amt;

  
  for(amt; 1 < amt; amt--){
    tlf.write(tla);  
    trb.write(tra);         // LEFT forward
    delay(3);           
    mlf.write(mla);     
    mrb.write(mra);     
    delay(3);                        
                        
    trf.write(otra);    
    tlb.write(otla);    
    delay(3);           
    mrf.write(omra);    
    mlb.write(omla);
    delay(3);        
      
    tla -= 3;
    tra += 3;
    otla += 3;
    otra -= 3;
    delay(10);
  } // end first for loop

  delay(2500);
  for(two; 1 < two; two--){
   tla += 3;
   tra -= 3;
   otla -= 3;
   otra +=3;
        
   tlf.write(tla);        // back to CENTER
   trb.write(tra);     
   delay(3);           
   mlf.write(mla);     
   mrb.write(mra);     
   delay(3);           
                       
                       
   trf.write(otra);    
   tlb.write(otla);    
   delay(3);           
   mrf.write(omra);    
   mlb.write(omla);    
   delay(3);  
   
   delay(15);
   
  } // end first for loop
  delay(2500);
  
} //end walkLF


/*void walketh(){
  int tla = 130; //left top angle
  int mla = 90; // left mid angle
  int tra = 40; // right top angle
  int mra = 90; // right mid angle
  
  for(int i=10;i>1;i--){    //    120 , 90 > 160 , 90
    tla += 4;
    tra -= 4;                   
    tlf.write(tla);   
    trb.write(tra);
    delay(10);        
  }

  for(int i=10;i>1;i--){    // 160 , 90 > 170 , 0
    tla += 1;
    tra -= 1;
    
    mla -= 9;
    mra += 9;

    tlf.write(tla);
    trb.write(tra);
    
    mlf.write(mla);
    mrb.write(mra);
    delay(10);
  }

  for(int i=26;i>1;i--){    // 170 , 0 > ~40 , 90
    tla -= 5;
    tra += 5;
    
    mla += 4;
    mra -= 4;

    tlf.write(tla);
    trb.write(tra);
        
    mlf.write(mla);
    mrb.write(mra);
    delay(10);
  }

  for(int i=10;i>1;i--){  // ~40 , 90 > 50 , 0
    tla += 5;
    tra -= 5;
    tlf.write(tla);
    trb.write(tra);
    delay(10);
  }
    
}*/

                                    // issue: mid arms too far forward - need to get closer to rest position for better walking
void walketh(String side){                      
  int tla = 130; //left top angle
  int mla = 90; // left mid angle
  int tra = 40; // right top angle
  int mra = 90; // right mid angle

  if(side=="r" or side=="right"){
  for(int i=10;i>1;i--){    //    120 , 90 > 160 , 90
    tla += 4;
    tra -= 4;                   
    tlb.write(tla);   
    trf.write(tra);
    delay(10);        
  }

  for(int i=10;i>1;i--){    // 160 , 90 > 170 , 0
    tla += 1;
    tra -= 1;
    
    mla -= 9;
    mra += 9;

    tlb.write(tla);
    trf.write(tra);
    
    mlb.write(mla);
    mrf.write(mra);
    delay(10);
  }

  for(int i=26;i>1;i--){    // 170 , 0 > ~40 , 90
    tla -= 5;
    tra += 5;
    
    mla += 4;
    mra -= 4;

    tlb.write(tla);
    trf.write(tra);
        
    mlb.write(mla);
    mrf.write(mra);
    delay(10);
  }

  for(int i=10;i>1;i--){  // ~40 , 90 > 50 , 0
    tla += 5;
    tra -= 5;
    tlb.write(tla);
    trf.write(tra);
    delay(10);
    }
  }

   else{
   for(int i=10;i>1;i--){    //    120 , 90 > 160 , 90
    tla += 4;
    tra -= 4;                   
    tlf.write(tla);   
    trb.write(tra);
    delay(10);        
  }

  for(int i=10;i>1;i--){    // 160 , 90 > 170 , 0
    tla += 1;
    tra -= 1;
    
    mla -= 9;
    mra += 9;

    tlf.write(tla);
    trb.write(tra);
    
    mlf.write(mla);
    mrb.write(mra);
    delay(10);
  }

  for(int i=26;i>1;i--){    // 170 , 0 > ~40 , 90
    tla -= 5;
    tra += 5;
    
    mla += 4;
    mra -= 4;

    tlf.write(tla);
    trb.write(tra);
        
    mlf.write(mla);
    mrb.write(mra);
    delay(10);
    }

  for(int i=10;i>1;i--){  // ~40 , 90 > 50 , 0
    tla += 5;
    tra -= 5;
    tlf.write(tla);
    trb.write(tra);
    delay(10);
    }
  }
}
