#include <iostream>
#ifndef FUNCTIONCOMPOSITION_H
#define FUNCTIONCOMPOSITION_H
#include <vector>
#include <functional>
#include "Functions.h"

class FunctionComposition {
    std::vector<std::function<double(double)>> funs;
    std::vector<double> results;

public:
    // Constructor (optional, but useful)
    FunctionComposition() = default;

    // Insert a new function into the composition
    void insert(std::function<double(double)> f) {
        funs.push_back(f);
    }

    // Apply all functions sequentially and store intermediate results
    double result(double x) {
        results.clear();
        double res = x;  // Start with x instead of uninitialized variable
        for (const auto& f : funs) {
            res = f(res);  // Compute the function result
            results.push_back(res);  // Store it
        }
        return res;
    }

    // Access results of individual function applications
    double operator[](int index) const {
        if (index < 0 || index >= static_cast<int>(results.size())) {
            throw std::out_of_range("Index out of range in FunctionComposition");
        }
        return results[index];
    }
};

#endif
