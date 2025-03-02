#ifndef NAME_PAIRS_H
#define NAME_PAIRS_H

#include <iostream>
#include <vector>
#include <string>

class Name_pairs {
protected:
    std::vector<std::string> names;
    std::vector<double> ages;

public:
    // Reads a name from user input and adds it to the names vector
    void read_names();

    // Reads ages corresponding to entered names
    void read_ages();

    // Prints names and corresponding ages
    void print() const;

    // Sorts names alphabetically and rearranges ages accordingly
    void sort_names_abc();

    // Overloading the << operator for Name_pairs
    friend std::ostream& operator<<(std::ostream& os, Name_pairs& pair);

    // Overloading the == operator to compare two Name_pairs
    bool operator==(Name_pairs& pair);

    // Overloading the != operator to compare two Name_pairs
    bool operator!=(Name_pairs& pair);
};

#endif
