/*
This is an example of calibrating an IR sensor on startup of a sketch.
Functions are utilized to make the code more readable: 
Blinking LED and getting an average value from the sensor are both their own functions.

by Valentin Vollmer/Maria McCarthy for Ten80Education
*/

int input, input2;
int inches7, inches15;
int pinLED = 11;
int wait = 500;

void setup()
{
	pinMode(pinLED , OUTPUT);
        Serial.begin (9600);
        
        //blink LED 13 3 times to indicate that you will be calibrating 
        // this uses the fuction: void blinkLED () which is declared below.
        blinkLed (3,500);
        //blink LED one time for 2 seconds
        blinkLed (1,2000);
        
        // read value for 7 inches
        inches7 = readSensor();
        Serial.println (inches7);
        

        //blink LED 3 times to indicate that you will be calibrating 
        blinkLed (3,500);
        //blink LEd one time for 2 seconds to indicate it is finished
        blinkLed (1,2000);
        
        
        // read value for 15 inches
        inches15 = readSensor();
        Serial.println (inches15);
        

}

void loop()
{
	input = 	readSensor() ;
        Serial.print ("\t 7 inches Value: ");
        Serial.print (inches7);
        Serial.print ("\t 15 inches Value: ");
        Serial.println (inches15);
        delay (50);
}



//
//------FUNCTIONS -------------------------------
//

//--------------------------------------------------------------------------------
//function to read sensor 20 times and return the average
int readSensor ()
{      
  int reading;
  for (int i=0;i < 20; i++)
        {
          reading = reading + analogRead (A0);        
        }
  int result = reading/ 20;
  return result;

}



//--------------------------------------------------------------------------------
//function to Blink  LED indicator. first argument is how often it should blink, 
//second argument is the time in milliseconds
void blinkLed (int max, int wait)
{
        for (int i=0; i <max; i++)
        {
          digitalWrite (pinLED,HIGH);
          delay (wait);
          digitalWrite (pinLED,LOW);
          delay (wait);
        }
  
  
}
