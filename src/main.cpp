#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(115200);
  delay(1000);
  // put your setup code here, to run once:
  int result = myFunction(2, 3);  
  Serial.printf("it's work!\n result = %d\n", result);

}
int varX = 2, varY = 3;
void loop() {
  // put your main code here, to run repeatedly:
  Serial.printf("varX: %d, varY: %d =  result %d\n", varX, varY, myFunction(varX++, varY++ ));
  delay(3000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}