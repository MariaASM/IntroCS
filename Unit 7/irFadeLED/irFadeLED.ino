int input= 0 ;
int output = 0;

void setup()
{
  pinMode( A0 , INPUT);   // Input pin for the IR sensor
	pinMode( 11 , OUTPUT);  // LED output
}

void loop()
{
  digitalWrite( 11 , LOW );
  input =   analogRead(A0);
  output = map (input, 0, 1023, 0, 255);
  analogWrite( 11 , output );
  Serial.println (input);      // Print the value on the screen
  delay(100);
}

