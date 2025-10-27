// week08_1_2048_part1_for_for_fill_rect
void setup(){
  size(410,410); 
}
void draw(){
  background(188,174,162); // 色彩用滴管，吸範例的圖
  for(int i=0;i<4;i++){ // 對應y座標
    for(int j=0;j<4;j++){ // 對應x座標
      fill(206,194,185);
      noStroke(); // 不要有黑線外框
      rect(j*100+5,i*100+10,90,90,3); 
    }
  }
}
