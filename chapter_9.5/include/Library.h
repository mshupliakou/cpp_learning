#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <vector>
#include "Patron.h"
#include "Book.h"

class Library{
    std::vector<Book> books;
    std::vector<Patron> patrons;
};





#endif