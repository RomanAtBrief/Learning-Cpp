/*
 * File: gmath.h
 * ---------------------
 * This file exports the constant PI along with a few degree-based
 * trigonomic functions, which are typicaly easier to use.
 */

#ifndef _gmath_h
#define _gmath_h

/* Constants */
/* The mathematical constant pi */
extern const double PI;

/*
 * Function: sinDegrees
 * Usage: double sine = sinDegrees(angle);
 * ---------------------------------------
 * Returns the trigonometric sine of the angle expressed in degrees.
 */
double sinDegrees(double angle);

/*
 * Function: cosDegrees
 * Usage: double cosine = cosDegrees(angle);
 * ---------------------------------------
 * Returns the trigonometric cosine of the angle expressed in degrees.
 */
double cosDegrees(double angle);

/*
 * Function: toDegrees
 * Usage: double degrees = toDegrees(radians);
 * -----------------------------------------
 * Converts an angle from radians to degrees.
 */
double toDegrees(double radians);

/*
 * Function: toRadians
 * Usage: double radiance = toRadiance(degrees);
 * -----------------------------------------
 * Converts an angle from degrees to radiance.
 */
double toRadiance(double degrees);

#endif
