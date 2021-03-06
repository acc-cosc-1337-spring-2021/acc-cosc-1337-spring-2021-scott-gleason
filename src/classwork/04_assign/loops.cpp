//cpp
#include "loops.h"
#include <iostream>

using std::cout;

int factorial(int num) 
{

    auto factorial_result = 1;
    
    for(int i=1; i <= num; ++i) 
    {
        factorial_result *= i;
        
    }

    return factorial_result;
}
