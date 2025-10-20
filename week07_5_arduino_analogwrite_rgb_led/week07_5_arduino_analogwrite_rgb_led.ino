// week07_5_arduino_analogwrite_rgb_led
void setup() {
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
} 

int a=0;
void loop() {
  analogWrite(6,0); // 藍色關掉
  analogwrite(3,255); // 最亮的紅色
  delay(500); // 每0.5秒
  analogWrite(3,0); // 紅色關掉
  analogWrite(5,255); // 最高的綠色
  delay(500); // 每0.5秒
  analogWrite(5,0); // 綠色關掉
  analogWrite(6,255); // 最高的藍色
  delay(500);
}