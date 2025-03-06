#include <iostream>
#include "Book.h"
#include "Patron.h"
#include "Library.h"

int main(){ 
    Library library;

    Book book1("12-13-4-er","Wuthering Heights", "Emily Bronte", 1999, false, prose);
    library.addBook(book1);
    //Book book2("12-13-y-TY4","Wuthering Heights", "Emily Bronte", 1999, false, prose);
    Book book3("12-13-4-ek","The Cather in the Rye", "Jerome David Salinger", 1999, true, prose);
    library.addBook(book3);
    Book book4("1345-56-6-23", "Dead Souls", "Nikolai Gogol", 2000, true, prose);
    library.addBook(book4);
    Book book5("1345-56-6-23", "English for kids", "Anastasia Green", 2003, true, for_children);
    library.addBook(book5);

    Patron patron("Tom Gordon", 5678, 15, false);
    patron.setFees(20);
    library.addPatron(patron);
    
    patron.handBook(book3);
    patron.handBook(book1);
    patron.handBook(book4);
    patron.handBook(book5);
    patron.print();
    patron.returnBook(book3);
    patron.print();



    return 0;
}

