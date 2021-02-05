//Write the include statement for types.h here

//Write include for capturing input from keyboard and displaying output to screen

#include "types.h"
#include <iostream>

using std::cin;
using std::cout;

int main() 

{

	int num;
	int num1 = 4;
	int result;
	
	cout << "Please enter an integer value: ";
	cin >> num;

	result = multiply_numbers(num);

	cout << "The result of " << num << " * 5 = " << result << "\n";

	result = multiply_numbers(num1);

	cout << "The result of " << num1 << " * 5 = " << result; 

	return 0;
}

