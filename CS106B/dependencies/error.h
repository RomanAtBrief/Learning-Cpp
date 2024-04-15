/*
 * File: error.h
 * ---------------------
 * This file defines a simple function for reporting errors.
 */

#ifndef _error_h
#define _error_h

/*
 * Function: error
 * Usage: error(msg);
 * -------------------
 * Writes the string msg to the cerr stream and then exits the program
 * with a standard status code indication failure. The usual pattern for
 * using error is to enclose the call to error inside an if statement that cheks faor a particular condition, which might look
 * something like this:
 *
 * if (divisor == 0) error("Division be zero");
 */

void error(std::string msg);

#endif
