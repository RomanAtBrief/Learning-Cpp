/*
 * File: Combinations.cpp
 * ---------------------
 * This program computes the mathematical function C(n, k) from
 * it's mathematical definition in terms of factorials.
 */

/* Preprocessor statement always satrts with # */
#include <iostream>

/* Function prototype or Declaration */
int combinations(int n, int k);
int fact(int n);

/* Main program */
int main()
{
    int n, k;
    std::cout << "Enter the number of objects (n): ";
    std::cin >> n;
    std::cout << "Enter the number to be chosen (k): ";
    std::cin >> k;
    std::cout << "C(n, k) = " << combinations(n, k) << std::endl;

    return 0;
}

/*
 * Function: combinations (n, k)
 * Usage: int nWays = combinations(n, k);
 * --------------------------------------
 * Returns the mathematical combinations function C(n, k), wich is
 * the number of ways one can choose k elements from a set of size n.
 */
int combinations(int n, int k)
{
    return fact(n) / (fact(k) * fact(n - k));
}

/*
 * Function: fact(n)
 * Usage: int result = fact(n)
 * --------------------------------------
 * Returns the factorial of n, which is the product of all the
 * integers between 1 and n, inclusive.
 */
int fact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}