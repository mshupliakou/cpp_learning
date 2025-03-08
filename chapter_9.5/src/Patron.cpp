#include <iostream>
#include "Patron.h"

bool Patron:: getFeesPaid() const {
    return fees_paid;
}

std::string Patron::getUser() const{
    return user;
}

int Patron::getIDcard() const{
    return id_card;
}

double Patron::getFees() const{
    return fees;
}

void Patron:: setFees(int a){
    fees=a;
}

void Patron:: handBook(Book book){
        if(book.getIs_handed()==true){
            handed_books.push_back(book);
            book.setIs_handed(true);
            std::cout<<user<<" with an id: "<<id_card<<" took a book: "
            <<book.getBook_name()<<"with an ISBN: "<<
            book.getISBN()<<std::endl;
        }
        else{
            std::cout<<"[ERROR]: book is handed already. "<<user<<" with an id: "<<id_card<<" can not take a book "
            <<book.getBook_name()<<"with an ISBN: "<<
            book.getISBN()<<std::endl;
        }
}

void Patron ::returnBook(Book book){
        int i=0;
        for(Book b: handed_books){
            i++;
            if(b==book){
                handed_books.erase(handed_books.begin(),handed_books.begin()+i);
            }
            
        }
        book.setIs_handed(false);
        std::cout<<user<<" [ID]: "<<id_card<<" returned a book "<<
        "with an [ISBN]: "<<
        book.getISBN()<<std::endl;
}

void Patron::print() const{
    std::cout<<"All the books of a user [ID]:"<<id_card<<std::endl;
    for(Book b: handed_books){
        std::cout<<b;    
        }
}