#ifndef CHRONO_H
#define CHRONO_H
#include <iostream>
#include <vector>

namespace Chrono{
/// @brief creates a type Month for months
enum class Month{
jan=1, feb, mar, apr, may, jun, 
jul, aug, sep, oct, nov, dec 
}; 
/// @brief describes a certain date
class Date{ 
public: 
/// @brief for generation of exceptions
class Invalid {};
Date(int y, Month m, int d); 
Date() ; 
int day () const { return d; } 
Month month() const { return m;}
int year() const { return y;}


void add_day(int n); 
void add_month(int n); 
void add_year(int n); 
private: 
int y; 
Month m; 
int d; 
}; 

/// @brief checks out if an entered date is correct
/// @param y 
/// @param m 
/// @param d 
/// @return true/false
bool is_date(int y, Month m, int d); 

/// @brief checks out if the year is a leap year
/// @param y 
/// @return true/false
bool leapyear(int y); 

bool operator==(const Date& a, const Date& b); 
bool operator!=(const Date& a, const Date& b); 
std::ostream& operator<<(std::ostream& os, const Date& d); 
} 






#endif