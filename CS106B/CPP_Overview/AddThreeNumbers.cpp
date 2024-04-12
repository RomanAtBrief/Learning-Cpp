/*
 * File: AddThreeNumbers.cpp
 * ---------------------
 * This program adds three floating-point numbers and prints their sum.
 */

#include <iostream>

/* Main program */
int main()
{
    double n1, n2, n3;
    std::cout << "This program adds three numers" << std::endl;
    std::cout << "1st number: ";
    std::cin >> n1;
    std::cout << "2nd number: ";
    std::cin >> n2;
    std::cout << "3rd number: ";
    std::cin >> n3;
    double sum = n1 + n2 + n3;
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}