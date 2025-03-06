#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <typeinfo>
#include <vector>
#include <sstream>
enum Genre{
    fantasy, prose, periodical, biografy, for_children
};

/// @brief describes a book
class Book{
std::string isbn; //isbn number is used to observe different books all over the world. right format is : n-n-n-x
std::string book_name;
std::string author_last_name;
int registration; // year of registration 
bool is_handed; // is this book in a library right now or not 
Genre genre;

public:
/// @brief function helps to devide a string into parts
/// @param str 
/// @param delimiter 
/// @return a vector which includes different parts of a string
friend std::vector<std::string> split(const std::string& str, char delimiter);

/// @brief Book constructor. Also checks if the parametrs are entered correctly
/// @param isbn 
/// @param book_name 
/// @param author_last_name 
/// @param registration 
/// @param is_handed 
Book(std::string isbn, std::string book_name, 
std::string author_last_name, int registration, bool is_handed, Genre genre);

std::string getISBN();
std::string getBook_name();
std::string getAuthor();
int getRegistration();
bool getIs_handed();
void setIs_handed(bool value);
Genre getGenre();

//overloading == operator. checks if two books have the same isbn
bool operator==(const Book &other);

//overloading != checks if two books have different isbn
bool operator!=(const Book &other);

//overloading << operator prints information about author, book, isbn
friend std::ostream& operator<<(std::ostream&os, const Book &book);
};

std::vector<std::string> split(const std::string& str, char delimiter);


#endif