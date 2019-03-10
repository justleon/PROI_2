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
    double modulo();

    //operators
    ComplexNum operator+(ComplexNum num);
    ComplexNum operator-(ComplexNum num);
    ComplexNum operator*(ComplexNum num);
    ComplexNum& operator+=(ComplexNum num);
    ComplexNum& operator-=(ComplexNum num);
    ComplexNum& operator*=(ComplexNum num);
    ComplexNum operator~(); //conjugation
    bool operator==(ComplexNum num);
    bool operator!=(ComplexNum num);

    //friends
    friend std::ostream& operator<<(std::ostream& os, ComplexNum& num);
};

#endif //COMPLEXNUM_H
