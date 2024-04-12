/*
 * File: Factor.cpp
 * ---------------------
 * This program factor a number using
 * Prime Factorization by division method
 */

/* Preprocessor statement always satrts with # */
#include <iostream>

int integer;
int temp;

/* Main program */
int main()
{
    std::cout << "This program factors a number" << std::endl;
    std::cin >> integer;

    while (integer != 1)
    {
        if (integer > 1 && integer % 2 == 0)
        {
            integer /= 2;
            std::cout << "2 ";
        }
        else if (integer > 1 && integer % 3 == 0)
        {
            integer /= 3;
            std::cout << "3 ";
        }
        else if (integer > 1 && integer % 5 == 0)
        {
            integer /= 5;
            std::cout << "5 ";
        }
        else
        {
            std::cout << integer << " is a prime number, try again!" << std::endl;
            break;
        }

        if (integer != 1)
        {
            std::cout << "x ";
        } 
        else
        {
            std::cout << std::endl;
        }
        
    }

    return 0;
}