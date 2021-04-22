

void setup(){
  pinMode(A0 , INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  

}
void loop()
{
  int var = analogRead(A0);
  Serial.println(var);
  if(var < 10){
    digitalWrite(3,HIGH);
  }else{
    digitalWrite(3,LOW);
  }
  
  
  
  
}
