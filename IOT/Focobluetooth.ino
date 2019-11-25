int input1=8;
int input2=9;

void setup() {
 pinMode(input1, OUTPUT);
 Serial.begin(9600);
 }
 
void loop() {
  
 if( Serial.available() > 0 )
   {     
      char data= Serial.read(); 
      switch(data)
      {
        case 'a': digitalWrite(input1, HIGH);
        break;
        
        case 'b': digitalWrite(input1, LOW);
        break;
        
        default : break;
      }
      Serial.println(data);
   }
   delay(100);
}
