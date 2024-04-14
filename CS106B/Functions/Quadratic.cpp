/*
 * File: Quadratic.cpp
 * ---------------------
 * This program finds roots of the quadratic equation
 *        2
 *    a x  + b x + c = 0
 *
 * If a is 0 or if the equation has no real roots, the
 * program prints an error message and exits.
 */

/* Preprocessor statement always satrts with # */
#include <iostream>
#include <string>

/* Function prototypes or Declarations */
void getCoefficients(double &a, double &b, double &c);
void solveQuadratic(double a, double b, double c, double &x1, double &x2);
void printRoots(double x1, double x2);
void error(std::string msg);

/* Main program */
int main()
{
    double a, b, c, r1, r2;
    getCoefficients(a, b, c);
    solveQuadratic(a, b, c, r1, r2);
    printRoots(r1, r2);

    return 0;
}

/*
 * Function: getCoefficients
 * Usage: getCoefficients(a, b, c);
 * -----------------------------------
 * Reads in the coefficients of the quadratic equation into the
 * reference parameters a, b, and c.
 */
void getCoefficients(double &a, double &b, double &c)
{
    std::cout << "Enter coefficients for the quadratic equation:" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
}

/*
 * Function: solveQuadratic
 * Usage: solveQuadratic(a, b, c, x1, x2);
 * ---------------------------------------
 * Solves a quadratic equation for the coefficients a, b, and c. The
 * roots are returned in the reference parameters x1 and x2.
 */
void solveQuadratic(double a, double b, double c, double &x1, double &x2)
{
    if (a == 0)
        error("The coefficient a must be nonzero.");

    double disc = b * b - 4 * a * c;
    if (disc < 0)
        error("The equation has no real roots.");
    x1 = (-b + sqrt(disc)) / (2 * a);
    x2 = (-b - sqrt(disc)) / (2 * a);
}

/*
 * Function: printRoots
 * Usage: printRoots(x1, x2);
 * ---------------------------------------
 * Displays x1 and x2, which are the roots of the quadratic equation.
 */
void printRoots(double x1, double x2)
{
    if (x1 == x2)
    {
        std::cout << "There is a double root at " << x1 << std::endl;
    }
    else
    {
        std::cout << "The roots are " << x1 << " and " << x2 << std::endl;
    }
}

/*
 * Function: error
 * Usage: error(msg);
 * ------------------
 * Writes the string msg to the cerr stream and then exits the program
 * with a standard status value indicating that a failure has occurred.
 */
void error(std::string msg)
{
    std::cerr << msg << std::endl;
    exit(EXIT_FAILURE);
}