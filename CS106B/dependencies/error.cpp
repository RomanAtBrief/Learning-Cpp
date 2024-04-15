/*
 * File: error.cpp
 * ---------------------
 * This file implements the error.h interface.
 */

/* Preprocessor statement always satrts with # */
#include <iostream>
#include <string>
#include "error.h"

/*
 * Implementation notes: error
 * ----------------------------
 * This functionwrites out the error message to the cerr stream and
 * then exits the program.
 */

void error(std::string msg)
{
    std::cerr << msg << std::endl;
    exit(EXIT_FAILURE);
}
