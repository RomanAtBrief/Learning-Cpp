/*
 * File: ReverseInt.cpp
 * ---------------------
 * This program reverses the digits in an integer.
 */

/* Preprocessor statement always satrts with # */
#include <iostream>

int integer;
int reverseInt = 0;

/* Main program */
int main()
{
    std::cout << "This program reverses the digits in an integer." << std::endl;
    std::cout << "Enter a positive integer: ";
    std::cin >> integer;

    while (integer > 0)
    {
        int temp = integer % 10;
        integer /= 10;

        reverseInt = reverseInt * 10 + temp;
    }

    std::cout << "The reversed integer is " << reverseInt << std::endl;

    return 0;
}