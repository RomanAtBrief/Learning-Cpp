/*
 * File: GuassSum.cpp
 * ---------------------
 * This program calculates the sum of the numbers
 * between 1 and 100
 */

#include <iostream>

int result;

/* Main program */
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        result += i;
    }

    std::cout << "The sum of numbers between 1 and 100 is : " << result << std::endl;
    return 0;
}