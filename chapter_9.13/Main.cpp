#include <iostream>
#include "Rational.h"
#include <iomanip>

int main(){
    
std::cout << std::setprecision(2); 
Rational r1(3, 4); // Standard instantiation

// Rational r2 = 5; // ERROR: conversion from ‘int’ to non-scalar type ‘Rational’ requested
Rational r3(7, 2);
Rational r6(20, 10);
Rational r7(2, 12);
Rational r8(1, 6);
if(r7==r8){
    std::cout << "r7 and r8 are equal" << std::endl;
}
else{
    std::cout << "r7 and r8 different" << std::endl;
}

std::cout << r1 << std::endl;
std::cout << r3 << std::endl;
std::cout << r6 << std::endl;
std::cout << "r6 after simplifying: " << r6.simplify() << std::endl;
//std::cout << r2 << std::endl;


double d = r1; // Implicit conversion to double
int i = static_cast<int>(r3); // Explicit conversion to int

std::cout << "Converted to double: " << d << std::endl;
std::cout << "Converted to int: " << i << std::endl;
Rational r4=r1+r3;
std::cout << "Sum 7/2+3/4 = " << r4 << std::endl;
Rational r5=r1-r3;
std::cout << "Substraction 7/2-3/4 = " << r5 << std::endl;
std::cout << "Before prefix increment: ";
std::cout << r1 << std::endl;
std::cout << "After prefix increment: ";
std::cout << ++(++r1) << std::endl;

std::cout << "Before postfix increment: ";
std::cout << r3 << std::endl;
Rational r3_old = r3++;
std::cout << "After postfix increment (old value): ";
std::cout << r3_old << std::endl;
std::cout << "After postfix increment (new value): ";
std::cout << r3 << std::endl;



    return 0;
}