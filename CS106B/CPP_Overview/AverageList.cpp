/*
 * File: AddIntegerList.cpp
 * ---------------------
 * This program adds a list of inegers. The end of the
 * input is indicated by entering a sentinel value, which
 * is defined by setting the value of the constant SENTINEL.
 */

/* Preprocessor statement always satrts with # */
#include <iostream>

/*
 * Constant: SENTINEL
 * --------------------
 * This constant defines the value used to terminate the input
 * list and should therefore not be a value one would want to
 * include as a data value. The value 0 therefore makes sense
 * for a program that adds a series of numbers because the
 * user can simply skip  any 1 values in the input.
 */

const int SENTINEL = 1;

/* Main program */
int main()
{
    std::cout << "This program adds a list of numbers." << std::endl;
    std::cout << "Use " << SENTINEL << " to signal the end." << std::endl;

    double average = 0;
    int temp = 0;
    int count = 0;

    while (true)
    {
        int value;
        std::cout << "?";
        std::cin >> value;

        if (value == SENTINEL)
            break;
        
        count++;
        temp += value;
        average = (double)temp / count;

    }

    std::cout << "The average is " << average << std::endl;

    return 0;
}