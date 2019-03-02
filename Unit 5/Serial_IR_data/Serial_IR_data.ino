int x;

void setup() 
{
  // Input distance from a object or wall and the values chance from 0 to 1023
  // You can now read values from your IR sensor
  Serial.begin(9600); // initialize baud rate to 9600
}

void loop() 
{
 x= analogRead(A0); // read value from pin A0
 Serial.println(x); //print the value on the screen
 delay(100);
}
