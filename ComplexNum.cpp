/*
 * Author: Łukasz Pokorzyński, Warsaw University of Technology
 * Implementation of methods for ComplexNum class.
 */

#include <cmath>
#include "HelpFuncs.h"
#include "ComplexNum.h"

#define PI 3.14159265

//constructors
ComplexNum::ComplexNum() : re(0), im(0)
{
}

ComplexNum::ComplexNum(double r, double i) : re(r), im(i)
{
}

//methods
double ComplexNum::abs()
{
    return sqrt(re*re + im*im);
}

double ComplexNum::arg()
{
    if(re == 0 && im == 0){
        std::cout << "Complex number = 0 doesn't have an argument!: ";
        return NAN;
    } else{
        return atan2(im, re) * 180/PI;
    }
}

//operators
ComplexNum ComplexNum::operator+(const ComplexNum& num)
{
    return ComplexNum(this->re + num.re, this->im + num.im);
}

ComplexNum ComplexNum::operator-(const ComplexNum& num)
{
    return ComplexNum(this->re - num.re, this->im - num.im);
}

ComplexNum ComplexNum::operator*(const ComplexNum& num)
{
    return ComplexNum(this->re*num.re - this->im*num.im, this->re*num.im + num.re*this->im);
}

ComplexNum& ComplexNum::operator+=(const ComplexNum& num)
{
    this->re += num.re;
    this->im += num.im;
    return *this;
}

ComplexNum& ComplexNum::operator-=(const ComplexNum& num)
{
    this->re -= num.re;
    this->im -= num.im;
    return *this;
}

ComplexNum& ComplexNum::operator*=(const ComplexNum& num)
{
    double re_backup = this->re;
    this->re = this->re*num.re - this->im*num.im;
    this->im = re_backup*num.im + num.re*this->im;
    return *this;
}

ComplexNum ComplexNum::operator~() //conjugation
{
    return ComplexNum(re, -im);
}

bool ComplexNum::operator==(const ComplexNum& num)
{
    return (this->re == num.re) && (this->im == num.im);
}

bool ComplexNum::operator!=(const ComplexNum& num)
{
    return !(*this == num);
}

//friends
std::ostream& operator<<(std::ostream& os, const ComplexNum& num)
{
    if(num.re != 0){ os << num.re; }
    if(num.im != 0){ os << checkSign(num.im) << num.im << "i"; }
    if(0 == num.re && 0 == num.im){ os << "0"; }
    return os;
}