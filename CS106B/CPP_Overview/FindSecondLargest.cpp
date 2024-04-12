/*
 * File: FindSecondLargest.cpp
 * ---------------------
 * This program find the largest ineger in a list.
 */

#include <iostream>

const int SENTINEL = 0;
int temp;
int largestNumber;
int secondLargestNumber;

/* Main program */
int main()
{
    std::cout << "This program find the largest ineger in a list." << std::endl;
    std::cout << "Enter 0 to signal the end of the list." << std::endl;

    while (true)
    {
        std::cin >> temp;

        if (temp != SENTINEL)
        {
            if (largestNumber == 0)
            {
                largestNumber = temp;
            }

            if (largestNumber <= temp)
            {
                secondLargestNumber = largestNumber;
                largestNumber = temp;
            } 
        }
        else
        {
            break;
        }
    }

    std::cout << "The largest value was " << largestNumber << "." << std::endl; 
    std::cout << "The second largest value was " << secondLargestNumber << "." << std::endl;
    return 0;
}