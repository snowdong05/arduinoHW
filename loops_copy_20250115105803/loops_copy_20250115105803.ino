void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //for (int i = 0; i <= 9; i++){
    //Serial.println(i);
  //}
  int i = 9;
  while(i >= 0){
    Serial.println(i);
    i--;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  

}
