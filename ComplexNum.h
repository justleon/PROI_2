/*
 * Author: Łukasz Pokorzyński, Warsaw University of Technology
 * .h file with class for complex numbers in C++
 */

#ifndef COMPLEXNUM_H
#define COMPLEXNUM_H

#include <iostream>

class ComplexNum{
    double re, im; //real and imaginary parts of the number
public:
    //constructors
    ComplexNum();
    ComplexNum(double r, double i);

    //methods
    double abs();
    double arg();

    //operators
    ComplexNum operator+(const ComplexNum& num);
    ComplexNum operator-(const ComplexNum& num);
    ComplexNum operator*(const ComplexNum& num);
    ComplexNum& operator+=(const ComplexNum& num);
    ComplexNum& operator-=(const ComplexNum& num);
    ComplexNum& operator*=(const ComplexNum& num);
    ComplexNum operator~(); //conjugation
    bool operator==(const ComplexNum& num);
    bool operator!=(const ComplexNum& num);

    //friends
    friend std::ostream& operator<<(std::ostream& os, const ComplexNum& num);
};

#endif //COMPLEXNUM_H
