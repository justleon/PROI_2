#ifndef COMPLEXNUM_H_INCLUDED
#define COMPLEXNUM_H_INCLUDED

#include <iostream>

class ComplexNum{
    int re;
    int im;
    int mod;
public:
    ComplexNum();
    ComplexNum(int r, int i);
    ComplexNum operator+(ComplexNum num);
    ComplexNum operator-(ComplexNum num);
    ComplexNum& operator+=(ComplexNum num1);
    ComplexNum& operator-=(ComplexNum num1);

    friend std::ostream& operator<<(std::ostream& os, ComplexNum& num);
};

#endif // COMPLEXNUM_H_INCLUDED
