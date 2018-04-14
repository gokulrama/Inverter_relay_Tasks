
int a=0;
void loop() 
{
 if(millis()>0)
 {
   digitalWrite(Rly1,HIGH);
   digitalWrite(Rly2,HIGH);
   cur_time1=millis();
 }
 else if(millis()- cur_time1>30000)
 {
  digitalWrite(Rly1,LOW);
  cur_time2=millis();
 }
 else if(millis()-cur_time1<600000){
   digitalWrite(Rly2,HIGH);
 }
 else if(millis()-cur_time1>630000){
   digitalWrite(Rly2,LOW);
}



