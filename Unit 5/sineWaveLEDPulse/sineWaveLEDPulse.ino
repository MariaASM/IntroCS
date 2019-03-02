//set a constant for the LED Pin
const int LED = 11;

void setup()
{
}

void loop()
{
  //calculate the value for "in" (which is the X value)
  float in, out;
  for (in = 0; in < 6.283; in = in + 0.001)
  {
    //calculate the Y Value for the given input 
    out = 127.5 * sin(in) + 127.5;
    
    //write the Value to the LED
    analogWrite(LED,out);
  }
}

