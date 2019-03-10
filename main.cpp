#include <iostream>
#include "ComplexNum.h"
#include "ComplexStack.h"
#include "HelpFuncs.h"

int main()
{
    ComplexNum num1(2, 2), num2(1, -1);
    ComplexStack stack, stack2;

    stack = stack + num1;
    stack += num2;

    stack2.push(ComplexNum(0, -2));
    stack2.push(ComplexNum(4, 0));

    std::cout << "Stack 1:\n" << stack << "Stack 2:\n" << stack2;

    stack.swap(stack2);
    std::cout << "Stack 1:\n" << stack << "Stack 2:\n" << stack2;

    while(!(stack.isEmpty())){
        num1 += stack.top();
        stack.pop();
    }
    std::cout << "Stack 1:\n" << stack << "num1: " << num1 << std::endl;

    std::cin.get();
}
