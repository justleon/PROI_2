#include <iostream>
#include "ComplexNum.h"
#include "ComplexStack.h"
#include "HelpFuncs.h"

int main()
{
    ComplexNum num1(2, 2), num2(1, -2), num3 = ~num2, num4(-2, 4), num5(0, 0);
    ComplexStack stack1, stack2;

    std::cout << "num1:\nArgument in degrees: " <<  num1.arg() << "\nAbsolute value: " << num1.abs() << std::endl;
    stack1 = stack1 + num1;
    stack1 += num2;

    stack2.push(num3);
    stack2.push(num4);

    std::cout << "\nStack 1:\n" << stack1 << "\nStack 2:\n" << stack2 << std::endl;

    stack1.swap(stack2);
    std::cout << "After .swap():\nStack 1:\n" << stack1 << "\nStack 2:\n" << stack2 << std::endl;

    while(!stack1.isEmpty()){
        num1 += stack1.top();
        stack1.pop();
    }
    std::cout << "Stack 1:\n" << stack1 << "num1: " << num1 << std::endl;

    std::cout << "\nnum2 == num3: " << (num2 == num3)
              << "\nnum4 - num2: " << num4 - num2
              << "\nnum1 * num2: " << num1 * num2 << std::endl;
    std::cin.get();
}
