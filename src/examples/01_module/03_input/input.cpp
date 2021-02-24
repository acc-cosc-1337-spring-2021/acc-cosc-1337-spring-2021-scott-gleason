//cpp
//write header file include

/*
Function get_total returns the product of parameters units and rate

@param int      - the number of units
@param double   - the rate per unit
@return the product of units and rate
*/

#include "input.h"

int find_min_value(int num1, int num2, int num3, int num4, int num5) 
{
    int min = num1;

    if (num2 < min) {
        min = num2;
    }

    if (num3 < min) {
        min - num3;
    }

    if (num4 < min) {
        min = num4;
    }

    if (num5 < min) {
        min = num5;
    }

    return min;
}

int find_max_value(int num1, int num2, int num3, int num4, int num5) 
{
    int max = num1;

    if (num2 > max) {
        max = num2;
    }
    
    if (num3 > max) {
        max = num3;
    }

    if (num4 > max) {
        max = num4;
    }

    if (num5 > max) {
        max = num5;
    }

    return max;   
}

