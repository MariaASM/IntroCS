//Function to determine whether temperature is considered hot. 

bool isItHot (int temp, int threshold) {
  bool result = 0;               // Declare and initialize local variable
  int celsius = (temp-32)*5/9;     // calculate celsius temperature

  if (celsius >= threshold)              // if Celsius is larger than 28 
   {
      result = 1;                // set "result" to 1. 1 is considered yes.
    }
  
  return result;                // return the result to the main code.
}
