#include <cmath>
#include "ComplexNum.h"

//constructors
ComplexNum::ComplexNum() : re(0), im(0), mod(0)
{
}

ComplexNum::ComplexNum(int r, int i) : re(r), im(i)
{
    mod = std::sqrt(re*re + im*im);
}

//methods
ComplexNum ComplexNum::operator+(ComplexNum num)
{
    return ComplexNum(this->re + num.re, this->im + num.im);
}

ComplexNum ComplexNum::operator-(ComplexNum num)
{
    return ComplexNum(this->re - num.re, this->im - num.im);
}

ComplexNum& ComplexNum::operator+=(ComplexNum num)
{
    this->re += num.re;
    this->im += num.im;
    this->mod = std::sqrt(re*re + im*im);
    return *this;
}

ComplexNum& ComplexNum::operator-=(ComplexNum num)
{
    this->re -= num.re;
    this->im -= num.im;
    this->mod = std::sqrt(re*re + im*im);
    return *this;
}

//friends
std::ostream& operator<<(std::ostream& os, ComplexNum& num)
{
    return os << "Real part: " << num.re << " Imaginary part: " << num.im << std::endl;
}
