int KirmiziLed=3;
int SariLed=5; 
int YesilLed=13;

void setup() {
pinMode(KirmiziLed, OUTPUT);   
pinMode(SariLed, OUTPUT);   
pinMode(YesilLed,OUTPUT);
}

void loop() {
digitalWrite(KirmiziLed, HIGH); 
digitalWrite(SariLed, LOW);
digitalWrite(YesilLed,LOW);
delay(10000); 
digitalWrite(KirmiziLed, HIGH); 
digitalWrite(SariLed, HIGH);
digitalWrite(YesilLed,LOW);             
delay(10000); 
digitalWrite(KirmiziLed,HIGH);
digitalWrite(SariLed,HIGH);             
digitalWrite(YesilLed,LOW);
delay(2000);
digitalWrite(KirmiziLed,LOW);
digitalWrite(SariLed,LOW);
digitalWrite(YesilLed,HIGH);
delay(5000);             
}
