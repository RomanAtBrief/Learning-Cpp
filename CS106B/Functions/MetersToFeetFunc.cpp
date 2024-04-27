/*
 * File: MetersToFeetFunc.cpp
 * ---------------------
 * This program converts a distance in meters to the
 * corresponding English distance in feet and inches using Functions
 * and call by reference.
 */

/* Preprocessor statement always satrts with # */
#include <iostream>

const double METERS_IN_INCHES = 0.0254;
const int INCHES_IN_FOOT = 12;

/* Prototypes */
void MetricToImperial(double meters, int &feet, double &inches);

/* Main program */
int main()
{
    double meters;
    double inches;
    int feet;

    std::cout << "This program converts meters to feet and inches." << std::endl;
    std::cout << "Enter distance in meters to convert: ";
    std::cin >> meters;

    MetricToImperial(meters, feet, inches);

    std::cout << meters << " meters is equal to: " << feet << " feet and " << inches << " inches." << std::endl;

    return 0;
}

/* Function */
void MetricToImperial(double meters, int &feet, double &inches)
{
    feet = (meters / METERS_IN_INCHES) / INCHES_IN_FOOT;
    inches = (meters / METERS_IN_INCHES) - (feet * INCHES_IN_FOOT);
}