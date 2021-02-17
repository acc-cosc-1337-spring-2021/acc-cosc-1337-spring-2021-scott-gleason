//write include statements

#include "variables.h"
#include <iostream>

using std::cin;
using std::cout;


//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout << "Please enter the amount of your meal: ";
	cin >> meal_amount;
	tax_amount = get_sales_tax(meal_amount);

	cout << "Please enter your desired tip rate: ";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tip_amount + tax_amount;

	cout << "\nReceipt \n";
	cout << "----------- \n";
	cout << "Meal Amount:   " << meal_amount << "\n";
	cout << "Sales Tax:     " << tax_amount << "\n";
	cout << "Tip Amount:    " << tip_amount << "\n";
	cout << "Total          " << total << "\n";

	return 0;
}
