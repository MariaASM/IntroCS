int brightness = 0 ;

void setup()
{
	pinMode( 11 , OUTPUT);
}

void loop()
{
	brightness = brightness + 1 ;
	analogWrite( 11 , brightness );
	delay( 10 );
        if (brightness == 255)
        {
          brightness = 0;
        }
        

}


