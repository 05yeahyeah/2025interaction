// week07_1_arduino_blink
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH); // 發亮
  delay(100);
  digitalWrite(13,LOW); // 暗掉
  delay(500);
}
