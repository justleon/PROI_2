/*
 * Author: Łukasz Pokorzyński, Warsaw University of Technology
 * .h with class for complex numbers stack
 */

#ifndef COMPLEXSTACK_H
#define COMPLEXSTACK_H

#include <iostream>
#include "ComplexNum.h"

class ComplexStack{
    struct Node{
        ComplexNum num;
        Node* back;
    };
    unsigned int el;
    Node* topNode;
public:
    //constructors/destructors
    ComplexStack();
    ~ComplexStack();

    //methods
    unsigned int size();
    ComplexNum& top();
    bool isEmpty();
    void push(ComplexNum num);
    void pop();
    void swap(ComplexStack& stack);

    //operators
    ComplexStack& operator+(ComplexNum num);
    ComplexStack& operator+=(ComplexNum num);

    //friends
    friend std::ostream& operator<<(std::ostream& os, ComplexStack& stack);
};

#endif //COMPLEXSTACK_H
