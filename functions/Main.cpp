#include "Functions.h"
#include "FunctionComposition.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>


// Function that allows only positive values (if x <= 0, returns 0)
double onlyPositive(double x){
    return x > 0 ? x : 0;
}

int main (){
    
    // Creating function objects with given parameters
    const Sinus sinus(M_PI, M_PI/2.); // f(x) = sin(a*x + b)
    const SquareRoot squareroot; // f(x) = x^0.5 (square root)
    const Linear lin(-0.25, 1.0); // f(x) = ax + b, where a=-0.25, b=1
   
    double x = 10;
    
    // Output values of individual functions
    std::cout << "Function values for argument x = " << x << std::endl;
    std::cout << "\tsinus(x) = " << sinus(x) << std::endl;
    std::cout << "\tsquareroot(x) = " << squareroot(x) << std::endl; 
    std::cout << "\tlin(x) = " << lin(x) << std::endl; 
      
    // Creating a FunctionComposition object
    FunctionComposition fc;
    fc.insert(sinus);          // Adding sine function
    fc.insert(squareroot);     // Adding square root function
    fc.insert(lin);            // Adding linear function
    fc.insert(onlyPositive);   // Adding function that keeps only positive values
  
    // Compute result for x=10 using function composition
    double result1 = fc.result(x);
    double result2 = onlyPositive(lin(squareroot(sinus(x))));
     
    std::cout << "-> x = " << x << ":\t" << result1 << ", " << result2 << std::endl; 
     
    // Check for x=0.25
    x = 0.25;
    std::cout << "-> x = " << x << ":\t" << fc.result(x) << std::endl;
   
    // Check results at each stage of nested function execution
    std::cout << "Results of successive nested function calculations: " << std::endl;
    double sinx = sinus(x);
    std::cout << "\t" << sinx << ", " << fc[0] << std::endl; 
    std::cout << "\t" << squareroot(sinx) << ", " << fc[1] << std::endl; 
    std::cout << "\t" << lin(squareroot(sinx)) << ", " << fc[2] << std::endl; 
    return 0;
}
/* //Output:
Wartosci funkcji dla argumentu x = 10
    sinus(x) = 1
    squareroot(x) = 3.16228
    lin(x) = -1.5
-> x = 10:  0.75, 0.75
-> x = 0.25:    0.789776
Wyniki dzialan kolejnych zagniezdzen funkcji: 
    0.707107, 0.707107
    0.840896, 0.840896
    0.789776, 0.789776
*/