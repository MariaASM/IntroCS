void setup()
{
	pinMode( 10 , OUTPUT);
	pinMode( 11 , OUTPUT);
	pinMode( 12 , OUTPUT);
}

void loop()
{
blinkLED (10);
blinkLED (11);
blinkLED (12);
}



void blinkLED (int pinNumber)
{
	digitalWrite( pinNumber , HIGH );
	delay( 200 );
	digitalWrite( pinNumber , LOW );

}
