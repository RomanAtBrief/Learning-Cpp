/*
 * File: OddNumberSum.cpp
 * ---------------------
 * Calculates the sum of first N odd integers. For example,
 * if N is 4, the program should display the value 16,
 * 1 + 3 + 5 + 7
 */

#include <iostream>

int input;
int result;
int count = 1;

/* Main program */
int main()
{
    std::cout << "Please type in positive interger: ";
    std::cin >> input;

    while (input != 0)
    {
        if (count % 2 != 0)
        {
            result += count;
            input--;
        }

        count++;
    }

    std::cout << "The sum of first N odd integers is: " << result << std::endl;
    return 0;
}