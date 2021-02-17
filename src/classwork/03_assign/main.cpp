//Write the include statement for decisions.h here
#include <iostream>
#include "decision.h"

//Write namespace using statements for cout and cin
using std::cin;
using std::cout;

int main() 
{
	
	int grade_entered;
	std::string grade_earned;

	cout << "Please enter a grade (0 - 100): ";
	cin >> grade_entered;

	if(grade_entered >= 0 && grade_entered <= 100)
	{
		grade_earned = get_letter_grade_using_if(grade_entered);
		cout << "The letter grade earned is: " << grade_earned << "\n";

		grade_earned = get_letter_grade_using_switch(grade_entered);
		cout << "The letter grade earned is: " << grade_earned << "\n";
	}
	else
	{
		cout << "Number out of range!";
	}
	

	return 0;
}

