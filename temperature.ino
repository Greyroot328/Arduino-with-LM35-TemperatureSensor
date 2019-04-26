// Copyright to Naman Sinha
// https://namansinha.in

int Relay1=8;
int Relay3=10;
float temp;

void setup() {

Serial.begin(9600);
  pinMode(Relay1,OUTPUT);
  pinMode(Relay3,OUTPUT);
  digitalWrite(Relay1,LOW);
  digitalWrite(Relay3,LOW);

}

void loop() {

  temp = analogRead(A0);
  temp = temp * 0.48828125 ;
  Serial.print(temp);
  Serial.println();
  
  
   if(temp>40){
      digitalWrite(Relay1,HIGH);
      digitalWrite(Relay3,HIGH);
      delay(1500);
   }
   else {
      digitalWrite(Relay1,LOW);
      digitalWrite(Relay3,LOW);
      delay(1500);
  }
  delay(2000);
    
}
