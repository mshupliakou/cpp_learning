#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <vector>
#include "Patron.h"
#include "Book.h"
#include "Chrono.h"

struct Transaction{
    Book book;
    Patron patron;
    Chrono::Date date;
};

class Library{
    std::vector<Book> books;
    std::vector<Patron> patrons;
    std::vector<Transaction> transactions;
    public:
    /// @brief adds a book to a library
    /// @param book 
    void addBook(Book book);

    /// @brief adds a patron to a library
    /// @param patron 
    void addPatron(Patron patron);

    /// @brief checks if book is in the archive of library
    /// @return true/false
    /// @param book 
    bool is_book_in_library(Book book) const;

    /// @brief checks if a patron is a member
    /// @param patron 
    /// @return true/false
    bool check_a_membership(Patron patron) const;

    /// @brief makes a transaction
    /// @param patron 
    /// @param book 
    /// @param date
    /// @param library 
    void borowing_a_book(Patron patron, Book book, Chrono::Date date, const Library& library);

    /// @brief displays all transactions in a vector of transactions
    void print_transactions()const;



    /// @brief finds debtors(people who did not pay their fees)
    /// @param library 
    /// @return a vector of debtors
    std::vector<Patron> debtors(const Library& library);  
      
    /// @brief display members of a library
    void print_patrons(std::vector<Patron> members) const;
};





#endif