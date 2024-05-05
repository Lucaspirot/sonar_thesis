#define led 13

void setup() {
  Serial.begin(9600);
  pinMode (led, OUTPUT);
}

void loop() {
  digitalWrite (led, 1);
  Serial.println("LED ALLUMEE");
  delay (1000);
  digitalWrite (led, 0);
  Serial.println("LED ETEINTE");
  delay (60000);
}
