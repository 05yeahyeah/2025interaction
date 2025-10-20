// week07_4_arduino_analogwrite
void setup() {
  pinMode(11,OUTPUT);
} 
int a=0;
void loop() {
  analogwrite(11,a); // 亮的程度，是 a 的值
  a = (a+1) % 256;
  delay(10);
}

