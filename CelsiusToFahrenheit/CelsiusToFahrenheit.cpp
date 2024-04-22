/*
 * File: CelsiusToFahrenheit.cpp
 * ---------------------
 * This program reads in a temperature in degrees
 * Celsius and displays the corresponding temperature in
 * degrees Fahrenheit.
 * This program uses functions to perfom the task.
 */

/* Preprocessor statement always satrts with # */
#include <iostream>


/* Prototypes */
double CelsiusToFahrenheit(double temp);

/* Main program */
int main()
{
    double temp;
    std::cout << "This program converts Celsius into Fahrenheit." << std::endl;
    std::cout << "Please type in temperature in Degrees Celsius: ";
    std::cin >> temp;

    std::cout << temp << " degrees Celcius in Fahrenheit is equal to " << CelsiusToFahrenheit(temp) << std::endl;
    return 0;
}

/* Function: CelsiusToFahrenheit */
double CelsiusToFahrenheit (double temp)
{
    return 9.0 / 5.0 * temp + 32;
}
