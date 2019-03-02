/* Store a number of outpins in a list or array 
 *  Toggle them on/off in loop with one set of commands 
 *  instead of repeating the same DigitalWrite(pinNumber, HIGH) DigitalWrite(pinNumber, LOW) 
 *  commands over and over again.
 *  Set up your circuit first with R, G, and B LEDS. Don't forget the resistors!
 */

int LED_Array[] = {2, 3, 4, 5, 6, 7};
int count = 0;
int t = 0 ;

void setup()
{
for (count=0;count<6;count++) {
    pinMode(LED_Array[count], OUTPUT);
  }
  
}

void loop()
{
  t = 500 ;
  for (count=0;count<6;count++) {
   digitalWrite(LED_Array[count], HIGH);
   delay(t);
   digitalWrite(LED_Array[count], LOW);
   delay(t);
  }
  for (count=5;count>=0;count--) {
   digitalWrite(LED_Array[count], HIGH);
   delay(t);
   digitalWrite(LED_Array[count], LOW);
   delay(t);
  }
}


