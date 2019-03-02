

void setup()
{
	pinMode( 3 , OUTPUT);
}

void loop()
{
  //some other code
  
  for (int index = 1; index < 256; index +=1)
      {  
	analogWrite( 3 , index );
	delay( 10 );
      }
      analogWrite (3,0);
}


