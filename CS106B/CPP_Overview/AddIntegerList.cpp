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
 * user can simply skip  any 0 values in the input.
 */

const int SENTINEL = 0;

/* Main program */
int main()
{
    std::cout << "This program adds a list of numbers." << std::endl;
    std::cout << "Use " << SENTINEL << " to signal the end." << std::endl;

    int total = 0;

    while (true)
    {
        int value;
        std::cout << "?";
        std::cin >> value;

        if (value == SENTINEL)
            break;
        total += value;
    }

    std::cout << "The total is " << total << std::endl;

    return 0;
}