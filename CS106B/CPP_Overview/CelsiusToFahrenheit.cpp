/*
 * File: CelsiusToFahrenheit.cpp
 * ---------------------
 * This program reads in a temperature in degrees
 * Celsius and displays the corresponding temperature in
 * degrees Fahrenheit.
 */

#include <iostream>

/* Main program */
int main()
{
    double temperature;
    std::cout << "This program converts Celsius into Fahrenheit." << std::endl;
    std::cout << "Please type in temperature in Degrees Celsius: ";
    std::cin >> temperature;
    std::cout << temperature << " degrees Celcius in Fahrenheit is equal to " << 9.0 / 5.0 * temperature + 32 << std::endl;
    return 0;
}