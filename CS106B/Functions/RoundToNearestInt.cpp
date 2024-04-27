/*
 * File: RoundToNearestInt.cpp
 * ---------------------
 * This programm rounds the floating-point number x
 * to the nearest integer by adding 0.5 to and subtracting from negative values
 */

/* Preprocessor statement always satrts with # */
#include <iostream>

/* Prototypes */
int roundToNearestInt(float x);

/* Main program */
int main()
{
    float x;
    std::cout << "This program rounds the floating-point number x" << std::endl;
    std::cout << "Ener positive or negative floating-point number to round: ";
    std::cin >> x;
    std::cout << "The round number is: " << roundToNearestInt(x) << std::endl;

    return 0;
}

/* Function */
int roundToNearestInt(float x)
{
    if (x > 0)
    {
        x += 0.5;
        return (int)x;
    }
    else
    {
        x -= 0.5;
        return (int)x;
    }
}