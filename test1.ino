void loop() {
  if(a==30)
  {  
    digitalWrite(Rly2,HIGH);
    set_flag++;
    if(set_flag<20)
    {
      b=0;
    }
    else if(set_flag==20)
    {
      set_flag=0;
      digitalWrite(Rly1,HIGH);
      b=0;
    }
    else if(set_flag==1)
    {
      digitalWrite(Rly2,LOW);
      digitalWrite(Rly1,LOW);
    }
  }
 
}

ISR(TIMER1_COMPA_vect)
{
  a++;
  b++;
}

