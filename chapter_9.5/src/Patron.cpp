#include <iostream>
#include "Patron.h"

bool Book:: getFeesPaid() const {
    return fees_paid;
}

std::string Book::getUser() const{
    return user;
}

int Book::getIDcard() const{
    return id_card;
}

double Book::getFees() const{
    return fees
}

void Book:: setFees(int a){
    fees=a;
}