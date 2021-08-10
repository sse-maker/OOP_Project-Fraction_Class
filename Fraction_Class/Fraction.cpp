//
//  Fraction.cpp
//  Fraction_Class
//
//  Created by 세광 on 2021/08/09.
//

#include <iostream>
#include "Fraction.hpp"

Fraction::Fraction() : numerator(0), denominator(1) {}
Fraction::Fraction(int numer) : Fraction() { SetNumer(numer); }
Fraction::Fraction(int numer, int denom) { Store(numer, denom); }
Fraction::Fraction(const Fraction& copyFrom) {
    numerator = copyFrom.numerator;
    denominator = copyFrom.denominator;
}
Fraction::~Fraction() {}

void Fraction::Store(int numer, int denom) {
    if (denom == 0) {
        throw denom;
    }
    else {
        if (denom < 0) {
            numer = -numer;
            denom = -denom;
        }
        SetNumer(numer);
        SetDenom(denom);
        Abbreviation(numer, denom);
    }
}
void Fraction::Print() const { std::cout << numerator << " / " << denominator << std::endl; }
void Fraction::SetNumer(int numer) { numerator = numer; }
void Fraction::SetDenom(int denom) { denominator = denom; }
const int Fraction::GetNumer() const { return numerator; }
const int Fraction::GetDenom() const { return denominator; }
void Fraction::Abbreviation(int numer, int denom) {
    int temp;
    if (numer < denom) temp = numer;
    else temp = denom;
    for (int i = temp; i >= 2; i--) {
        if (numer % i == 0 && denom % i == 0) {
            numer /= i;
            denom /= i;
            SetNumer(numer);
            SetDenom(denom);
            break;
        }
    }
}

Fraction Fraction::operator++() {
    Store(numerator + denominator, denominator);
    return *this;
}
Fraction Fraction::operator++(int) {
    Fraction temp(numerator, denominator);
    Store(numerator + denominator, denominator);
    return temp;
}
Fraction Fraction::operator=(const Fraction& rhs) {
    Store(rhs.numerator, rhs.denominator);
    return *this;
}
Fraction Fraction::operator+=(const Fraction& rhs) {
    Store(numerator * rhs.denominator + denominator * rhs.numerator, denominator * rhs.denominator);
    return *this;
}
Fraction Fraction::operator+(const Fraction& rhs) const {
    return Fraction(numerator * rhs.denominator + denominator * rhs.numerator, denominator * rhs.denominator);
}
Fraction Fraction::operator-(const Fraction& rhs) const {
    return Fraction(numerator * rhs.denominator - denominator * rhs.numerator, denominator * rhs.denominator);
}
Fraction Fraction::operator*(const Fraction& rhs) const {
    return Fraction(numerator * rhs.numerator, denominator * rhs.denominator);
}
Fraction Fraction::operator/(const Fraction& rhs) const {
    return Fraction(numerator * rhs.denominator, denominator * rhs.numerator);
}
