/*
 * Author: Łukasz Pokorzyński, Warsaw University of Technology
 * Implementation of methods for ComplexNum class.
 */

#include <cmath>
#include "HelpFuncs.h"
#include "ComplexNum.h"

//constructors
ComplexNum::ComplexNum() : re(0), im(0)
{
}

ComplexNum::ComplexNum(double r, double i) : re(r), im(i)
{
}

//methods
double ComplexNum::modulo()
{
    return sqrt(re*re + im*im);
}

//operators
ComplexNum ComplexNum::operator+(ComplexNum num)
{
    return {this->re + num.re, this->im + num.im};
}

ComplexNum ComplexNum::operator-(ComplexNum num)
{
    return {this->re - num.re, this->im - num.im};
}

ComplexNum ComplexNum::operator*(ComplexNum num)
{
    return {this->re*num.re - this->im*num.im, this->re*num.im + num.re*this->im};
}

ComplexNum& ComplexNum::operator+=(ComplexNum num)
{
    this->re += num.re;
    this->im += num.im;
    return *this;
}

ComplexNum& ComplexNum::operator-=(ComplexNum num)
{
    this->re -= num.re;
    this->im -= num.im;
    return *this;
}

ComplexNum& ComplexNum::operator*=(ComplexNum num)
{
    double re_backup = this->re;
    this->re = this->re*num.re - this->im*num.im;
    this->im = re_backup*num.im + num.re*this->im;
    return *this;
}

ComplexNum ComplexNum::operator~()  //conjugation
{
    return {re, -im};
}

bool ComplexNum::operator==(ComplexNum num)
{
    return (this->re == num.re) && (this->im == num.im);
}

bool ComplexNum::operator!=(ComplexNum num)
{
    return !(*this == num);
}

//friends
std::ostream& operator<<(std::ostream& os, ComplexNum& num)
{
    if(num.re != 0){ os << num.re; }
    if(num.im != 0){ os << checkSign(num.im) << num.im << "i"; }
    return os;
}
