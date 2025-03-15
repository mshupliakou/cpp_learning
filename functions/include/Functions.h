#include <iostream>
#include <cmath>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/**
 * @file Functions.h
 * @brief Defines mathematical function classes for use in function composition.
 */

/**
 * @class Sinus
 * @brief Represents a sine function of the form f(x) = sin(a * x + b).
 */
class Sinus {
    double a; ///< Coefficient for x
    double b; ///< Offset value
public:
    /**
     * @brief Constructor initializes sine function parameters.
     * @param a Coefficient for x in the sine function.
     * @param b Offset value added inside the sine function.
     */
    Sinus(double a, double b) : a(a), b(b) {}
    
    /**
     * @brief Function call operator to compute the sine function.
     * @param x Input value.
     * @return Computed sine value.
     */
    inline double operator()(double x) const {
        return sin(a * x + b);
    }
};

/**
 * @class SquareRoot
 * @brief Represents a square root function f(x) = sqrt(x).
 */
class SquareRoot {
public:
    /**
     * @brief Function call operator to compute the square root.
     * @param x Input value.
     * @return Computed square root.
     */
    inline double operator()(double x) const {
        return sqrt(x);
    }
};

/**
 * @class Linear
 * @brief Represents a linear function of the form f(x) = ax + b.
 */
class Linear {
    double a; ///< Coefficient for x
    double b; ///< Constant term
public:
    /**
     * @brief Constructor initializes linear function parameters.
     * @param a Coefficient for x.
     * @param b Constant term.
     */
    Linear(double a, double b) : a(a), b(b) {}
    
    /**
     * @brief Function call operator to compute the linear function.
     * @param x Input value.
     * @return Computed linear function value.
     */
    inline double operator()(double x) const {
        return a * x + b;
    }
};

#endif // FUNCTIONS_H
