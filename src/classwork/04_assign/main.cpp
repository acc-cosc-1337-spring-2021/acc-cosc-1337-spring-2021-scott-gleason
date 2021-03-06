//write includes statements

//write using statements for cin and cout

#include "loops.h"
#include <iostream>

using std::cin;
using std::cout;


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	int factorial_num;
	char quit_program = 'N'; 
	

	do 
	{
		auto input_valid = false;
		
		cout << "Please enter an integer between 1 and 10: ";
		cin >> num;
		
		while (input_valid == false) 
		{
			if (num < 1 || num > 10) 
			{
				cout << "Invalid Entry! \n";
				cout << "Please enter an integer between 1 and 10: ";
				cin >> num;
				input_valid = false;
			}
			else 
			{
				input_valid = true;
			}
		}
		
		factorial_num = factorial(num);	
	
		cout << "The factorial of " << num << " is " << factorial_num << "\n\n";

		cout << "Do you want to Quit? Y or N: ";
		cin >> quit_program;


	}
	while(quit_program == 'N' || quit_program =='n');

	

	return 0;
}