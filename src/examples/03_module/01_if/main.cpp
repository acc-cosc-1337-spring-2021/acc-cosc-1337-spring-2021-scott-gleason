#include<iostream>
#include "if.h"//to use is_even function here
#include <string>

using std::string;
using std::cout;
using std::cin;

int main() 
{
	string dna;
	int char_count = 0;
    double string_size =0;
    double gc_content;

	cout << "Please enter a DNA string to check: ";
	cin >> dna;
   
    for (unsigned int i = 0; i < dna.size(); ++i) 
    {
        if (dna[i] == 'C' || dna[i] == 'G') 
        {
            ++char_count;
			cout << dna[i] << "\n";
        }
        ++string_size;
    }

    gc_content = char_count / string_size;
    cout << "size of string is: " << string_size << "\n";
	cout << "Character count is: " << char_count << "\n";
    cout << "GC Content is: " << gc_content;



	return 0;
}
