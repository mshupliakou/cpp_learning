#include <iostream>
#include "Library.h"

void Library::addBook(Book book){
    books.push_back(book);
}

void Library::addPatron(Patron patron){
    patrons.push_back(patron);
}