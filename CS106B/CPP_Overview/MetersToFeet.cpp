/*
 * File: MetersToFeet.cpp
 * ---------------------
 * This program converts a distance in meter to the
 * corresponding English distance in feet and inches.
 */

#include <iostream>

const double METERS_IN_INCHES = 0.0254;
const int INCHES_IN_FOOT = 12;

/* Main program */
int main()
{
    double meters;
    double inches;
    int feet;

    std::cout << "This program converts meters to feet and inches." << std::endl;
    std::cout << "Enter distance in meters to convert: ";
    std::cin >> meters;

    feet = (meters / METERS_IN_INCHES) / INCHES_IN_FOOT;
    inches = (meters / METERS_IN_INCHES) - (feet * INCHES_IN_FOOT);

    std::cout << meters << " meters is equal to: " << feet << " feet and " << inches << " inches." << std::endl;

    return 0;
}