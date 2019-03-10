#include <iostream>
#include "ComplexNum.h"
#include "HelpFuncs.h"

int main()
{
    ComplexNum num1(2, 2), num2(1, -1);
    ComplexNum num3 = ~num1;
    num1 = num1 + num2;
    num2 = num2 - num1;
    std::cout << num3 << std::endl;
    std::cout << "num1 + num2: " << num1 << "\nnum2 - num1: " << num2 << std::endl;
    num1 += num2;
    num2 -= num1;
    std::cout << "num1 += num2: " << num1 << "\nnum2 -= num1: " << num2 << std::endl;

    std::cout << "modulo of num1: " << num1.modulo() << std::endl << "modulo of num2: " << num2.modulo() << std::endl;

    num1 = ComplexNum(2, 0);
    num2 = ComplexNum(0, -1);
    std::cout << num1 << std::endl << num2 << std::endl;
}
