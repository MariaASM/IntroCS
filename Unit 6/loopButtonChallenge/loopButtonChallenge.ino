int button= LOW ;
const int ledPin = 3;
int brightness = 0;
int increment = 1;

void setup()
{

	pinMode( 12 , OUTPUT);
}

void loop()
{
  button = 	digitalRead( 2) ; //read button state
  
  while (button == HIGH) // Runs when button is pressed
	{
            brightness = brightness + increment ;
            analogWrite( ledPin , brightness );
       	    delay( 10 );
            if (brightness == 255)
            {
              increment = -1;
            }
            else if (brightness == 0)
            {
              increment = 1;
            }
                       
               button = digitalRead( 2) ; //read button state to avoid infinite loop
	}

  //turn LED off when button is not pressed
  digitalWrite( ledPin , LOW );
	
}

