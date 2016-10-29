#include <Sparki.h>

void setup() {
  for (int x=1; x < 1; x++) 
  {
 sparki.clearLCD();
sparki.print(x);
sparki.updateLCD();
delay(1000);}
}

void loop() {
  for (int x=1; x < 11; x++) 
  {
sparki.println(x*x);
sparki.updateLCD();
delay(1000);}
}
