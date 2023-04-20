#pragma once

#include <iostream>

namespace ariel
{
    class Fraction
    {
        private:
        int _numerator;
        int _denominator;

        public:
        Fraction(); 
        Fraction(const int& x1,const int& x2); 

        Fraction operator +(const Fraction& fraction); 
        Fraction operator +(float other);
        friend Fraction operator+ (float other,const Fraction& fraction);

        Fraction operator -(const Fraction& fraction);
        Fraction operator -(float other);
        friend Fraction operator- (float other,const Fraction& fraction);

        Fraction operator *(const Fraction& fraction);
        Fraction operator *(float other);
        friend Fraction operator* (float other,const Fraction& fraction);

        Fraction operator /(const Fraction& fraction);
        Fraction operator /(float other);
        friend Fraction operator/ (float other,const Fraction& fraction);

        bool operator ==(const Fraction& fraction);
        bool operator ==(float other) ;
        friend bool operator ==(float other,const Fraction& fraction);

        bool operator >(const Fraction& fraction);
        bool operator >(float other) ;
        friend bool operator >(float other,const Fraction& fraction);

        bool operator <(const Fraction& fraction);
        bool operator <(float other) ;
        friend bool operator <(float other,const Fraction& fraction);

        bool operator <=(const Fraction& fraction);
        bool operator <=(float other) ;
        friend bool operator <=(float other,const Fraction& fraction);

        bool operator >=(const Fraction& fraction);
        bool operator >=(float other);
        friend bool operator >=(float other,const Fraction& fraction);

        Fraction operator ++();
        Fraction operator ++(int);
        Fraction operator --();
        Fraction operator --(int);

        friend std::ostream& operator <<(std::ostream& os,const Fraction& fraction);
        friend std::istream& operator >>(std::istream& is, Fraction& fraction);

    };
}