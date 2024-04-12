/*
 * File: FindLargest.cpp
 * ---------------------
 * This program finds the largest integer in the list.
 */

#include <iostream>

const int SENTINEL = 0;
int largestNumber;

/* Main program */
int main()
{
    std::cout << "This program finds the largest integer in the list." << std::endl;
    std::cout << "Enter 0 to signal the end of the list" << std::endl;

    while (true)
    {
        int temp;
        std::cin >> temp;

        if (temp != SENTINEL)
        {   
            if (largestNumber == 0) 
            {
                largestNumber = temp;
            }

            if (largestNumber <= temp)
            {
                largestNumber = temp;
            }
        }
        else
        {
            break;
        }
    }
    std::cout << "The largest value was " << largestNumber << "." << std::endl;
    return 0;
}