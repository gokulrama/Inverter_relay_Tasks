
int a=0;
void loop() 
{
 if(a==0)
 
  digitalWrite(Rly1,HIGH);
 else
  digitalWrite(Rly1,LOW);
  
 if(!Set_flag)
   digitalWrite(Rly2,HIGH);
  else
  {
   digitalWrite(Rly2,LOW);
   set_flag=0;
  }
}

ISR(TIMER1_COMPA_vect)
{
  count1++;
  count2++;
  if(count1==30)
  {
  a=~a;
  count1=0;
  }
  if(count2==600)
   {
  Set_flag=1;
  count2=0;
   }
}

