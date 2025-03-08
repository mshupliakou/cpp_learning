#include <iostream>
#include "Book.h"
#include "Patron.h"
#include "Library.h"
#include "Chrono.h"

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

    Patron patron1("Tom Gordon", 5678, 15, false);
    Patron patron2("Anastasia Fedko", 1000, 15, true);
    Patron patron3("Alesia Kol", 1001, 20, false);
    Patron patron4("Martyna Gordon", 5678, 15, true);

    library.addPatron(patron1);
    library.addPatron(patron2);
    library.addPatron(patron3);
    library.addPatron(patron4);

    library.borowing_a_book(patron1, book1, Chrono::Date(2025, Chrono::Month::mar, 8), library);
    library.borowing_a_book(patron2, book3, Chrono::Date(2025, Chrono::Month::mar, 8), library);
    library.borowing_a_book(patron2, book4, Chrono::Date(2025, Chrono::Month::mar, 8), library);

    std::cout<<"Debtors: "<<std::endl;
    library.print_patrons(library.debtors(library));
    library.print_transactions();


    return 0;
}

