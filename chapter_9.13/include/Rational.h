#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

/**
 * @class Rational
 * @brief A class to represent rational numbers with basic arithmetic operations.
 */
class Rational {
    int p; ///< Numerator of the rational number.
    int q; ///< Denominator of the rational number.

public:
    /**
     * @brief Constructs a rational number with a given integer (defaults to denominator = 1).
     * @param num The numerator.
     */
    explicit Rational(int num) : p(num), q(1) {}

    /**
     * @brief Default constructor.
     */
    Rational();

    /**
     * @brief Constructs a rational number with given numerator and denominator.
     * @param p Numerator.
     * @param q Denominator.
     */
    Rational(int p, int q);

    /**
     * @brief Overloads the stream output operator for rational numbers.
     */
    friend std::ostream& operator<<(std::ostream& os, Rational& rational);

    /**
     * @brief Converts the rational number to a double.
     */
    operator double();

    /**
     * @brief Explicit conversion to int (truncates the fractional part).
     */
    explicit operator int() {
        return static_cast<int>(static_cast<double>(p) / static_cast<double>(q));
    }

    /**
     * @brief Prefix increment operator.
     */
    Rational& operator++();

    /**
     * @brief Addition operator.
     */
    Rational operator+(const Rational& other);

    /**
     * @brief Subtraction operator.
     */
    Rational operator-(const Rational& other);

    /**
     * @brief Multiplication operator.
     */
    Rational operator*(const Rational& other);

    /**
     * @brief Division operator.
     */
    Rational operator/(const Rational& other);

    /**
     * @brief Postfix increment operator.
     */
    Rational operator++(int);

    /**
     * @brief Simplifies the rational number.
     */
    Rational& simplify();

    /**
     * @brief Assignment operator.
     */
    Rational& operator=(Rational& other);

    /**
     * @brief Equality comparison operator.
     */
    bool operator==(Rational other);
};

/**
 * @brief Overloads the stream output operator for rational numbers.
 */
std::ostream& operator<<(std::ostream& os, Rational& rational);

#endif // RATIONAL_H
