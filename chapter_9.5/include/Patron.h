#ifndef PATRON_H
#define PATRON_H
#include <iostream>
#include <vector>
#include "Book.h"

/// @brief describes a user of a library
class Patron{
    std::string user;
    int id_card;
    double fees;
    bool fees_paid;
    std::vector <Book>handed_books;
    public:
    Patron(std::string user, int id_card, double fees, bool fees_paid):user(user), id_card(id_card), fees(fees),
    fees_paid(fees_paid){}
    std::string getUser() const;
    int getIDcard() const;
    double getFees() const;
    bool getFeesPaid() const;

    void setFees(int a);

    /// @brief adds a book to a vector of loaned books of a patron
    /// @param book 
    void handBook(Book book);

    /// @brief deletes a book from a vector of loaned books of a patron
    /// @param book 
    void returnBook(Book book);

    /// @brief displays all the books an user possesses
    void print() const;
    
};






#endif