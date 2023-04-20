#include "Fraction.hpp"

namespace ariel{
    Fraction:: Fraction(): _numerator(1), _denominator(1){} //default constructor.
    
    Fraction:: Fraction(const int& x1,const int& x2) :_numerator(x1),_denominator(x2){} //initialization constructor.
   
    //The + operator to add two fractions and return their sum as another fraction in reduced form.
    Fraction Fraction:: operator +(const Fraction& fraction) {
        return fraction;
    }
    Fraction Fraction::operator +(float other){ 
        Fraction f(1,2);
        return f;
    }
    Fraction operator +(float other,const Fraction& fraction){
        return fraction;
    }

    //The - operator to subtract two fractions and return their difference as another fraction in reduced form.
    Fraction Fraction:: operator -(const Fraction& fraction){
        return fraction;
    }
    Fraction Fraction::operator -(float other){ 
        Fraction f(1,2);
        return f;
    }
    Fraction operator -(float other,const Fraction& fraction){
        return fraction;
    }

    //The * operator to multiply two fractions and return their product as another fraction in reduced form.
    Fraction Fraction:: operator *(const Fraction& fraction){
        return fraction;
    }
    Fraction Fraction::operator *(float other){ 
        Fraction f(1,2);
        return f;
    }
    Fraction operator *(float other,const Fraction& fraction){
        return fraction;
    }

    //The / operator to divide two fractions and return their quotient as another fraction in reduced form.
    Fraction Fraction:: operator /(const Fraction& fraction) {
        return fraction;
    }
    Fraction Fraction::operator /(float other){ //********
        Fraction f(1,2);
        return f;
    }
    Fraction operator/ (float other,const Fraction& fraction){
        return fraction;
    }

    //The ++ and -- operator that adds (or substracts) 1 to the fraction. implement both pre and post fix.
    Fraction Fraction::operator ++(){
        Fraction f(1,2);
        return f;
    }
    Fraction Fraction::operator ++(int){
        Fraction f(1,2);
        return f;
    }
    Fraction Fraction::operator --(){
        Fraction f(1,2);
        return f;
    }
    Fraction Fraction::operator --(int){
        Fraction f(1,2);
        return f;
    }

    //The == operator to compare two fractions for equality and return true or false.
    bool Fraction:: operator ==(const Fraction& fraction){
        return true;
    }
    bool Fraction::operator ==(float other) {
        return true;
    }
    bool operator ==(float other,const Fraction& fraction){
        return true;
    }

    //All comparison operations (>,<,>=,<=)
    bool Fraction:: operator <=(const Fraction& other){
        return true;
    }
    bool Fraction::operator <=(float other) {
        return true;
    }
    bool operator <=(float other,const Fraction& fraction){
        return true;
    }
    bool Fraction:: operator >=(const Fraction& other){
        return true;
    }
    bool Fraction::operator >=(float other){
        return true;
    }
    bool operator >=(float other,const Fraction& fraction){
        return true;
    }
    bool Fraction:: operator <(const Fraction& other) {
        return true;
    }
    bool Fraction::operator <(float other) {
        return true;
    }
    bool operator <(float other,const Fraction& fraction){
        return true;
    }
    bool Fraction:: operator >(const Fraction& other) {
       return true; 
    }
    bool Fraction::operator >(float other){
        return true;
    }
    bool operator >(float other,const Fraction& fraction){
        return true;
    }
    
    //The << operator to print a fraction to an output stream in the format “numerator/denominator”.
    std::ostream& operator <<(std::ostream& os,const Fraction& fraction){
        return os;
    }
    //The >> operator to read a fraction from an input stream by taking two integers as input.
    std::istream& operator >>(std::istream& is, Fraction& fraction){
        return is;
    }

}