int lectura=A0;
int senal=0;
 
 
void setup(){
Serial.begin(9600);
pinMode(lectura,INPUT);
}
 
void loop(){
senal=analogRead(lectura);
Serial.println(senal);
 
if(senal >= 700){
digitalWrite(9,HIGH);
}
 
if(senal <= 699){
digitalWrite(9,LOW);
}
 
delay(30);
}
