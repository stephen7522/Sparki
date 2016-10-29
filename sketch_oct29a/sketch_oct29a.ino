#include <Sparki.h>
int x=1;
void setup() {
  // put your setup code here, to run once:
sparki.clearLCD();
sparki.println(x);
sparki.updateLCD();
delay(1000);
}

void loop() {
  (x++)*(x++);
sparki.println((x++)*(x++));
sparki.updateLCD();
delay(1000);
  // put your main code here, to run repeatedly:
}
