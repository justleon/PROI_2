#ifndef COMPLEXNUM_H
#define COMPLEXNUM_H

#include <iostream>

class ComplexNum{
    int re;
    int im;
    double mod;
public:
    ComplexNum();
    ComplexNum(int r, int i);
    ComplexNum operator+(ComplexNum num);
    ComplexNum operator-(ComplexNum num);
    ComplexNum& operator+=(ComplexNum num1);
    ComplexNum& operator-=(ComplexNum num1);

    friend std::ostream& operator<<(std::ostream& os, ComplexNum& num);
};

#endif // COMPLEXNUM_H
