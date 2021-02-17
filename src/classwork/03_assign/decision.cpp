//write include statement
#include "decision.h"

std::string get_letter_grade_using_if(int grade)
{
    std::string letter_grade;

    if(grade >= 90 && grade <= 100)
    {
        letter_grade = "A";
    }
    if(grade >= 80 && grade <= 89)
    {
        letter_grade = "B";
    }
    if(grade >= 70 && grade <= 79)
    {
        letter_grade = "C";
    }
    if(grade >= 60 && grade <= 69)
    {
        letter_grade = "D";
    }
    if(grade >= 0 && grade <= 59)
    {
        letter_grade = "F";
    }

    return letter_grade;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string letter_grade;

    switch(grade / 10)
    {
        case 10:case 9:
            letter_grade = "A";
            break;
        case 8:
            letter_grade = "B";
            break;
        case 7:
            letter_grade = "C";
            break;
        case 6:
            letter_grade = "D";
            break;
        default:
            letter_grade = "F";
            break;
    }

    return letter_grade;
}
