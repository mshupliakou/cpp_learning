#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#ifndef NAME_PAIRS_H
#define NAME_PAIRS_H

class Name_pairs{
    std::vector<std::string> names;
    std::vector<double> ages;

    public:
    // Reads a name from user input and adds it to the names vector
    void read_names();

    // Reads ages corresponding to entered names
    void read_ages ();

    // Prints names and corresponding ages
    void print() const;

    // Sorts names alphabetically and rearranges ages accordingly
    void sort_names_abc();
};



#endif