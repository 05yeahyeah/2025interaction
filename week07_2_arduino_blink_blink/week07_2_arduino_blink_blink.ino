// week07_2_arduino_blink_blink
void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH); // 發亮
  delay(200);
  digitalWrite(13,LOW); // 暗掉
  digitalWrite(12,HIGH);
  delay(500);
}

