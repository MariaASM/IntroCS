int input= 0 ;
int input2;
int output = 0;
int inches7;

void setup()
{
	pinMode( 11 , OUTPUT);
	pinMode( 13 , OUTPUT);
        Serial.begin (9600);
        
        //indicate that you will be calibrating
        for (int i=0; i <3; i++)
        {
          digitalWrite (13,HIGH);
          delay (500);
          digitalWrite (13,LOW);
          delay (500);
        }
        
        inches7 = readSensor();
        Serial.println (inches7);
}

void loop()
{
	input = 	readSensor() ;
        input2 = analogRead (A0);
	output = map (input, 0, 1023, 0, 255);
        analogWrite (11, output);
        Serial.print (input2);
        Serial.print ("\t from function: ");
        Serial.println (input);
        delay (50);
}



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
