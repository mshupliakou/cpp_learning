#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <vector>
#include "Patron.h"
#include "Book.h"

class Library{
    std::vector<Book> books;
    std::vector<Patron> patrons;
    public:
    /// @brief adds a book to a library
    /// @param book 
    void addBook(Book book);

    /// @brief adds a patron to a library
    /// @param patron 
    void addPatron(Patron patron);
};





#endif