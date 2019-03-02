/*
Example to illustrate the use of a function. LED on pin 13 gets turned f the temparature is considered hot.
Detour via Celsius is to demo calculcatins inside a function.
by Valentin Vollmer, Ten80 Education inc.
*/


int temperature = 83;        // change this value to test this sektch.
bool hot;

void setup() {
  
 pinMode (13, OUTPUT);
}

void loop() {

  hot = isItHot (temperature);     //pass the value in "temperature" to the funcion, let it do its thing and store the result in "hot"
  if (hot == 1)                    // if hot has been set to 1
    {
      digitalWrite (13, HIGH);        // turn LED on
    }
}

//end of main code!


//Function to determine whether temperature is considered hot. 

bool isItHot (int temp) {
  
  bool result = 0;               // Declare and initialize local variable
  int celsius = (temp-32)*5/9;     // calculate celsius temperature

  if (celsius >= 28)              // if Celsius is larger than 28 
   {
      result = 1;                // set "result" to 1. 1 is considered yes.
    }
  
  return result;                // return the result to the main code.
}
