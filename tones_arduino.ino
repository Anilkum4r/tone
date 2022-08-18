int music[7] = {240,270,300,327.5,360,400,450};
byte const buzz=3;
void setup() {
  pinMode(buzz,1);
}

void loop() {
  for(int i=0;i<7;i++){
   tone (buzz,music[i],1000);
   delay(1000);
 noTone(buzz);
  }
}
