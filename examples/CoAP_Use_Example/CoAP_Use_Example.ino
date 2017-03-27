const int ledPin1 = 13;

void setup(){
  pinMode(ledPin1, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()) {
    light(Serial.read()- '0');
  }
  delay(500);
}
void light(int n){
  switch(n)
  {
    case 1:
    digitalWrite(ledPin1, HIGH);
    delay(1000);
    digitalWrite(ledPin1, LOW);
    delay(1000);
    break;
  }
}


