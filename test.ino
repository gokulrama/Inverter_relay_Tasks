void loop() {
  
  if(rly1_on==600){
     rly1_on=0;
     set1=1;
     digitalWrite(Rly1,HIGH);
     rly1_off=0;
     }
     
     if(rly1_off==30&& set==1){
     digitalWrite(Rly1,LOW);
     set=0;
     rly1_off=0;
     }

  
   if(rly2_on==30) {
     rly2_on=0;
     rly2_off=0;
     set2=1;
    digitalWrite(Rly2,HIGH);
   }

   
   if(rly2_off==30&&set2==1)
    {
    set2=0;
    digitalWrite(Rly2,LOW);
    rly2_off=0;
    }
   
}

ISR(TIMER1_COMPA_vect)
{
  rly1_on++;
  rly1_off++;
  rly2_on++;
  rly2_off++;
}

