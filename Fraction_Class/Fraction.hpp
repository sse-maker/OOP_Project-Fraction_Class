//
//  Fraction.hpp
//  Fraction_Class
//
//  Created by 세광 on 2021/08/09.
//

#ifndef Fraction_hpp
#define Fraction_hpp

class Fraction {
public:
    Fraction();
    Fraction(int numer);
    Fraction(int numer, int denom);
    Fraction(const Fraction& copyFrom);
    ~Fraction();
    
    void Store(int numer, int denom);
    void Print() const;
    void SetNumer(int numer);
    void SetDenom(int denom);
    const int GetNumer() const;
    const int GetDenom() const;
    void Abbreviation(int numer, int denom);
    
    Fraction operator++();
    Fraction operator++(int);
    Fraction operator=(const Fraction& rhs);
    Fraction operator+=(const Fraction& rhs);
    Fraction operator+(const Fraction& rhs) const;
    Fraction operator-(const Fraction& rhs) const;
    Fraction operator*(const Fraction& rhs) const;
    Fraction operator/(const Fraction& rhs) const;
    
private:
    int numerator;
    int denominator;
};

#endif /* Fraction_hpp */
