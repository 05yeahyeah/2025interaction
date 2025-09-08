// week01_2_keyPressed_textSize_text_key
void setup(){
  size(500,500); 
}
void draw(){ // 用鍵盤來互動
  if(keyPressed){
    background(#FF0000);
    textSize(80);
    text(""+key, 100, 100);
  }
}
