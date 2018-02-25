int L;
void light(void);

void setup() {
  Serial.begin(9600);

}

void loop() {
  while (L != 255){ 
   L = L + 1;
   light();
  }
  while (L != 0){
    L = L - 1;
    light();
  }
}

void light() {
 analogWrite(11, L);
 Serial.println(L);
 delay(10);
}


