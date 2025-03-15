#include <iostream>
#include <numeric>
#include "Rational.h"

    Rational::Rational():p(1),q(1){}
    Rational::Rational(int p, int q){
        this->p=p;
        if(q!=0){
            this->q=q;
        }
    }
    std::ostream& operator<<(std::ostream& os, Rational& rational){
        return os<<rational.p<<"/"<<rational.q;
    }

    Rational::operator double(){
        return (double)(p)/((double)q);
    }

    Rational& Rational:: operator++(){
        p=p+q;
        return *this;
    }
    Rational Rational:: operator++(int){
        Rational temp = *this;
        p+=q;
        return temp;
    }
    Rational& Rational::operator=(Rational & other){
        p= other.p;
        q= other.q;
        return *this;
    }
    Rational Rational::operator+(const Rational& other){
        if(q==other.q){
            return Rational(p+other.p,q);
        }
        else{
            return Rational(p*std::lcm(q, other.q)/q+other.p*std::lcm(q, other.q)/other.q, std::lcm(q, other.q));
        }
    }
    Rational Rational::operator-(const Rational& other){
        if(q==other.q){
            return Rational(p+other.p,q);
        }
        else{
            return Rational(p*std::lcm(q, other.q)/q-other.p*std::lcm(q, other.q)/other.q, std::lcm(q, other.q));
        }
    }

    Rational Rational::operator*(const Rational& other){
            return Rational(p*other.p, q*other.q);
    }
    Rational Rational::operator/(const Rational& other){
            return Rational(p*other.q, q*other.p);
    }

    Rational& Rational::simplify(){
        if(std::gcd(q, p) !=1){
            int p1=p/std::gcd(q, p);
            int q1=q/std::gcd(q, p);
            p=p1;
            q=q1;     
        }
        return *this;
    }

    bool Rational::operator==(Rational other){
        Rational n1 = this->simplify();
        Rational n2 = (other).simplify();
        if(n1.q==n2.q && n1.p==n2.p){
            return true;
        }
        else{
            return false;
        }
    }