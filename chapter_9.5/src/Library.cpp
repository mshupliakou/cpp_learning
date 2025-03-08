#include <iostream>
#include "Library.h"
#include "Chrono.h"
#include "Patron.h"
#include <vector>

void Library::addBook(Book book){
    books.push_back(book);
}

void Library::addPatron(Patron patron){
    patrons.push_back(patron);
}

bool Library::is_book_in_library(Book book) const{
    for(Book b: books){
        if(b==book)
            return true;
    }
    return false;
}

bool Library::check_a_membership(Patron patron) const{
    for(Patron p: patrons){
        if(p.getIDcard()==patron.getIDcard())
            return true;
    }
    return false;
}

void Library::borowing_a_book(Patron patron, Book book, Chrono::Date date, const Library& library){
    if(library.check_a_membership(patron)){
        if(library.is_book_in_library(book)){
            if(patron.getFeesPaid()){
                patron.handBook(book);
                Transaction transaction;
                transaction.book=book;
                transaction.date=date;
                transaction.patron=patron;
                transactions.push_back(transaction);
                std::cout<<"[TRANSACTION SUCCESSED]"<<std::endl;
            }
            else{
                std::cout<<"[ERROR]:The patron "<<patron.getIDcard()<<" did not pay their fees!"<<std::endl; 
            }
        }
        else{
            std::cout<<"[ERROR]:There is no such book in the library!"<<std::endl; 
        }
    }
    else{
        std::cout<<"[ERROR]:There is no such patron!"<<std::endl;
    }
}

void Library::print_transactions()const{
    for(Transaction t: transactions){
        std::cout<<"[ "<<t.date<<" ]: "<<t.patron.getIDcard()<<"|"<<t.book.getISBN()<<std::endl;
    }
}    

std::vector<Patron> Library::debtors(const Library& library){
    std::vector<Patron> debtors;
    for(Patron p: library.patrons){
        if(p.getFeesPaid()==false){
            debtors.push_back(p);
        }
    }
    return debtors;
}

void Library::print_patrons(std::vector<Patron> members) const{
    for(Patron p: members){
        std::cout<<"[ID]:"<<p.getIDcard()<<" "<<p.getUser()<<std::endl;
    }
}