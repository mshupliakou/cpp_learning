#include <iostream>
#include "Chrono.h"

namespace Chrono{

    Date::Date(int y, Month m, int d):y(y),m(m),d(d){}
    Date::Date():y(2001),m(Month::jan),d(1){}


    void Date::add_day(int n){
        d+=n;
    }
    void Date::add_month(int n){
        int k;
        k= (int) m +n;
        m=Month(k);
    }
    void Date::add_year(int n){
        y+=n;
    }

    bool is_date(int y, Month m, int d){
        if (d<=0) return false; 
        if (m<Month::jan||Month::dec<m) return false; 
        int days_in_month;
        switch (m){ 
            case Month::jan: case Month::mar: case Month::may:
            case Month::jul:case Month::aug:case Month::oct:case Month::dec:
            days_in_month=31;
            break;
            case Month::feb:
                days_in_month =(leapyear(y) )?29:28; 
            break; 
            case Month::apr:case Month::jun: case Month::sep: case Month::nov: 
            days_in_month = 30;
            break; 
        } 
            if (days_in_month<d) return false; 
            return true;
    }

    bool leapyear(int y){
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
    bool operator==(const Date& a, const Date& b){
        if(a.day()==b.day()&&a.month()==b.month()&& a.year()==b.year()){
            return true;
        }
        else return false;
    }
    bool operator!=(const Date& a, const Date& b){
        if(a.day()==b.day()&&a.month()==b.month()&& a.year()==b.year()){
            return false;
        }
        else return true;
    }
    std::ostream& operator<<(std::ostream& os, const Date& d){
        return os << "( " << d. year ()<<" , " << int(d.month())<< " , " << d.day() << " ) " ;
    }
}
