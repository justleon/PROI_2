#include <iostream>
#include "ComplexNum.h"
#include "HelpFuncs.h"

int main()
{
    ComplexNum num1(2, 2), num2(1, -1);
    num1 = num1 + num2;
    num2 = num2 - num1;
    std::cout << "num1 + num2: " << num1 << "num2 - num1: " << num2 << std::endl;
    num1 += num2;
    num2 -= num1;
    std::cout << "num1 += num2: " << num1 << "num2 -= num1: " << num2 << std::endl;
}
