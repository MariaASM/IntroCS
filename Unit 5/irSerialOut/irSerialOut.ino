int input= 0 ;
int output = 0;

void setup()
{
	pinMode( A0 , INPUT);   // Input pin for the IR sensor
  pinMode( 10 , OUTPUT);  // Output pin for the servo control
        Serial.begin (9600);
}

void loop()
{
	input = 	analogRead(A0) ;
  output = map (input, 0, 1023, 0, 255);
        analogWrite (10, output);
        Serial.println (input);      // Print the value on the screen
}

