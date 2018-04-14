
#include"timer.h"

#define Rly1 13
#define Rly2 12

short rly1_flag=0;
short rly2_flag=0;
short a=0;
short b=0;
short d=0;

void setup() {
  init_timer_intrupt();
  Serial.begin(9600);
  pinMode(Rly1,OUTPUT);
  pinMode(Rly2,OUTPUT);
}

void loop() {
  
  if(c==600){
     c=0;
     d=0;
     digitalWrite(Rly1,HIGH);
     while(d!=30);
     digitalWrite(Rly1,LOW);
  }

    
   if(a==30) {
    a=0;
    b=0;
    digitalWrite(Rly2,HIGH);
    while(b!=30);
    digitalWrite(Rly2,LOW);
   }
   
}

ISR(TIMER1_COMPA_vect)
{
  a++;
  b++;
  c++;
  d++;
}

