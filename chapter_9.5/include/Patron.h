#ifndef PATRON_H
#define PATRON_H
#include <iostream>
/// @brief describes a user of a library
class Patron{
    std::string user;
    int id_card;
    double fees;
    bool fees_paid;
    public:
    
    std::string getUser() const;
    int getIDcard() const;
    double getFees() const;
    bool getFeesPaid() const;

    void setFees(int a);
};






#endif