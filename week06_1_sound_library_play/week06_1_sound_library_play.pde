// week06_1_sound_library_play
// File-Preference 字型改大一點
// Sketch-Library-ManageLibraries,找 Sound 安裝
// 
//
import processing.sound.*;
SoundFile sound; // 宣告 SoundFile 物件變數
void setup(){
  size(500,400); // 視窗大小
  sound = new SoundFile(this, "music.mp3");
  sound.play();
}
void draw(){
  
}
