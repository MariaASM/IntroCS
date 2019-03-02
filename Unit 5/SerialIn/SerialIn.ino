char input = "A";                    // initialize variable
int led = 11;                        // data and serial data are just variables to hold information

void setup()
{
Serial.begin(9600);                     // initialize serial communication
pinMode (led, OUTPUT);                  // set pin 11 as output
}

void loop()
{
  
  //This section reads the serial data coming from the serial monitor.
  if (Serial.available()>0)          // when data is in the buffer, i. e. available.
          { 
          input = Serial.read ();     // write serial data into  variable "input"
        //  Serial.print ("input = ");    // writes "input = " to the serial monitor
          Serial.println (input);         // shows you what was received.
          }
          
//Reacts to what was sent
if ( input == 'L' || input == "l"){              // If an "L" or lowercase "l" was sent turn the LED on. 
     digitalWrite (led, HIGH); 
  }
else {           
     digitalWrite(led, LOW); //turn the led off
  }
}
