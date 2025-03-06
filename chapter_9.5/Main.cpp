#include <iostream>
#include "Book.h"
#include "Patron.h"

int main(){ 
    Book book1("12-13-4-er","Wuthering Heights", "Emily Bronte", 1999, false, prose);
    //Book book2("12-13-y-TY4","Wuthering Heights", "Emily Bronte", 1999, false);
    Book book3("12-13-4-ek","The Cather in the Rye", "Jerome David Salinger", 1999, true, prose);
    if(book1==book3){
        std::cout<<"Book nr 3 and book nr 1 are the same book"<<std::endl;
    }
    else{
        std::cout<<"Book nr 3 and book nr 1 are NOT the same book"<<std::endl;
    }
    std::cout<<book1<<std::endl;
    std::cout<<book3<<std::endl;
    Patron patron;



    return 0;
}

