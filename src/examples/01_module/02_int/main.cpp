
#include <iostream>

using std::cin;
using std::cout;

int main() 
{
	int num = 0;

	cout << "Please enter a Integer between 1 and 100: ";
	cin >> num;

	if (num >= 1 && num <=100)
	{
		cout <<"OK";
	}
	else 
	{
		cout << "Out of range!";
	}

	return 0;
}