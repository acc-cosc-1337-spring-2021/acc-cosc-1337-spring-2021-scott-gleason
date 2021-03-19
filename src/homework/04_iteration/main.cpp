//write include statements

#include "dna.h"

//write using statements

using std::cin;
using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char choice;
	double gc_content;
	string dna, new_dna;
	bool quit_program;

	do 
	{
		cout << "Please enter 1 for Get GC Content, 2 for Get DNA Complement, Y to quit: ";
		cin >> choice;

		if (choice == '1') 
		{
			cout << "\nPlease enter DNA string: ";
			cin >> dna;
			gc_content = get_gc_content(dna);
			cout <<"The GC Content for DNA string " << dna << " is " << gc_content << "\n";
		}
		else if (choice == '2') 
		{
			cout << "\nPlease enter DNA string: ";
			cin >> dna;
			new_dna = get_dna_complement(dna);
			cout << "The DNA Complement for DNA string " << dna << " is " << new_dna << "\n";
		}
		else if (choice == 'Y' || choice == 'y') {
			quit_program = true;
		}
		else 
		{
			cout << "Invalid Entry!";
		}
	}
	while (quit_program == false);

	return 0;
}