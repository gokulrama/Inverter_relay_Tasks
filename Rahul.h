void loop() {
  if(a==0)
  {
    digitalWrite(Rly1,HIGH);
  }
  else
  {
    digitalWrite(Rly1,LOW);
  }
  if(b<20)
  {
    digitalWrite(Rly2,HIGH);
  }
  else if(b<21)
  {
    digitalWrite(Rly2,LOW);
  }
  else
  b=0;
}

ISR(TIMER1_COMPA_vect)
{
  count++;
  if(count==30)
  {
    a=~a;
    b++;
    count=0;
  }
}

