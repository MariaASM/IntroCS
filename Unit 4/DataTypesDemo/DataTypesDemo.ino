/*
Sketch demonstrate the use of different data types.
Reference: https://learn.sparkfun.com/tutorials/data-types-in-arduino.
Revision by Valentin Vollmer, Ten80 Education inc. http://www.Ten80education.com
*/

//Records starting time in miliseconds to calculate the runtime of calculations
unsigned long start_time = 0;
unsigned long end_time = 0;

// Change here to test for different data types: replace "byte" with "int", "long", "float"
#define test_type float

test_type x = 2.36;
test_type y = 6.0;
test_type z;

int var = 4;  // Switch which statement to print: 1 = Add, 2=Sub, 3=Mult, 4=Div

void setup() 
{
  Serial.begin(9600);
  Serial.println("This is a SparkFun datatype demo.");

  Serial.print("x = ");
  Serial.println(x);
  Serial.print("y = ");
  Serial.println(y);
  
  // change data type here to display correct type on screen.
  switch (var) {
    case 1:
     Serial.println("Addition with bytes: z = x + y");
      break;
    case 2:
      Serial.println("Subtraction with bytes: z = x - y");
      break;
    case 3:
      Serial.println("Multiplication with bytes: z = x * y");
      break;
    case 4:
      Serial.println("Division with bytes: z = x/y");
      break;
   
  }
}

void loop() 
{
  start_time = micros();
  
  //change operator here: +    *    /  
  z=x/y; 
  end_time = micros();
  Serial.print("z = ");
  Serial.println(z);
  Serial.print("Start time: ");
  Serial.println(start_time);
  Serial.print("End time: ");
  Serial.println(end_time);
  Serial.print("Elapsed time: ");
  Serial.println(end_time - start_time);
  while(1);   // performs the task while the condition is true and then do nothing else.
}
