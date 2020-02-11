#include <iostream>
#include <vector>
#include <math.h>       
#include "UtilityFunctions.h"



// Implement your functions here. Don't forget function comments!


unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}
