int button= LOW ;

void setup()
{
	pinMode( 2 , INPUT);
	pinMode( 12 , OUTPUT);
}

void loop()
{
	button = 	digitalRead( 2) ;
	if (button  == HIGH )
	{
		digitalWrite( 12 , HIGH );
	}
	else
	{
		digitalWrite( 12 , LOW );
	}
}

