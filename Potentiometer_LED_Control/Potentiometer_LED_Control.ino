int B, R, G;
void light(void);

void setup() {
  Serial.begin(9600);

}

void loop() {
 B = analogRead(0) * .255;
 R = analogRead(1) * .255;
 G = analogRead(2) * .255;
 if (B > 255){
  B = 255;
 }
 if (R > 255){
  R = 255;
 }
 if (G > 255){
  G = 255;
 }
 if (R == 1) {
  R = 0;
 }
 if (G == 1) {
  G = 0;
 }
 if (B == 1) {
  B = 0;
 }
 light(); 
}

void light() {
  analogWrite(11, G);
  analogWrite(10, R);
  analogWrite(9, B);
}

