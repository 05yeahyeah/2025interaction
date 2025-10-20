// week07_3_arduino_blink_blink_blink
// 修改自 week07_2_arduino_blink_blink
void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  for(int i=10;i<=13;i++){
    digitalWrite(13,LOW);
    digitalWrite(i-1,LOW); // 暗掉
    digitalWrite(i,HIGH); // 發亮
    delay(500);
  }
}

