#include "dna.h"

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna) 
{
    double char_count = 0;
    double gc_content = 0;

    for (size_t i = 0; i < dna.length(); ++i) 
    {
        if (dna[i] == 'C' || dna[i] == 'G') 
        {
            ++char_count;
        }
    }

    gc_content = char_count / dna.length();

    return gc_content;

}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string reverse_string(string dna) 
{
    string new_dna;

    for (int i = dna.length() - 1; i >= 0; i--) 
    {
        new_dna.push_back(dna[i]);
    }

    return new_dna;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna) 
{
    string new_dna = reverse_string(dna);

    for (size_t i = 0; i < new_dna.length(); ++i) 
    {
        switch(new_dna[i])
        {
            case 'A':
                new_dna[i] = 'T';
                break;
            case 'T':
                new_dna[i] = 'A';
                break;
            case 'C':
                new_dna[i] = 'G';
                break;
            case 'G':
                new_dna[i] = 'C';
                break;
        }
    }

    return new_dna;
}
