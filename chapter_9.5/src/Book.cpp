#include <iostream>
#include "Book.h"

std::string Book::getISBN(){
    return isbn;
}

std::string Book::getBook_name(){
    return isbn;
}

std::string Book::getAuthor(){
    return author_last_name;
}

int Book::getRegistration(){
    return registration;
}

bool Book::getIs_handed(){
    return is_handed;
}

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

Book::Book(std::string isbn, std::string book_name, 
std::string author_last_name, int registration, bool is_handed)
: isbn(isbn), book_name(book_name), author_last_name(author_last_name), 
registration(registration), is_handed(is_handed) {
    //checking out if the isbn is well written and has the right length
    // the right format :n-n-n-x. n(int), x(string)
    {
    const int max_length_of_isbn = 30;
    
    if (isbn.length() > max_length_of_isbn) {
        throw std::runtime_error("[ERROR]: The length of the ISBN is too long!");
    }

    std::vector<std::string> parts = split(isbn, '-');

    if (parts.size() != 4) {
        throw std::runtime_error("[ERROR]: Invalid ISBN format!");
    }

    for (size_t i = 0; i < 3; i++) {
        for (char c : parts[i]) {
            if (!isdigit(c)) {
                throw std::runtime_error("[ERROR]: ISBN format is incorrect!");
            }
        }
    }

    }
//checking out if the registration year is entered correctly
//this year can not be earlier then the libary exists and can't be later then actual year
    {
        if(registration<1968||registration>2025){
            throw std::runtime_error("[ERROR]: Registration yesr isn't enetered correctly");
        }
    }
    
}

bool Book::operator==(const Book &other){
    if(isbn==other.isbn)
        return true;
    else
        return false;
}
bool Book::operator!=(const Book &other){
    if(isbn==other.isbn)
        return false;
    else
        return true;

}
std::ostream& operator<<(std::ostream&os, const Book &book){
    os<<"[Author]: "<<book.author_last_name<<std::endl;
    os<<" [Book]: "<<book.book_name<<std::endl<<" [ISBN]: "<<book.isbn<<std::endl;
    return os;
}

