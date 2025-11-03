// week09_5_arduino_
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  tone(8,262,100);
  delay(100);
  tone(8,196,100);
  delay(100);
}

void serialEvent(){
    while(Serial.available()){
    char now = Serial.read();
    if( now=='R'){
      tone(8,262,100);
      delay(100);
    }
    else if(now=='L'){
      tone(8,196,100);
      delay(100);
    }
    else if(now=='U'){
      tone(8,220,100);
      delay(100);
    }
    else if(now=='D'){
      tone(8,247,100);
      delay(100);
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
