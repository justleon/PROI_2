/*
 * Author: Łukasz Pokorzyński, Warsaw University of Technology
 * Implementation of methods for ComplexStack class.
 */

#include <iostream>
#include <climits>
#include "ComplexStack.h"
#include "HelpFuncs.h"

//constructors/destructors
ComplexStack::ComplexStack()
{
    el = 0;
    topNode = nullptr;
}

ComplexStack::~ComplexStack()
{
    while(topNode != nullptr){
        Node* temp = topNode;
        topNode = topNode->back;
        delete temp;
    }
}

//methods
unsigned int ComplexStack::size()
{
    return el;
}

ComplexNum& ComplexStack::top()
{
    return topNode->num;
}

bool ComplexStack::isEmpty()
{
    return el == 0;
}

void ComplexStack::push(ComplexNum num)
{
    if(this->size() != UINT_MAX){
        Node* new_node;
        if(topNode == nullptr){
            new_node = new Node{num, nullptr};
            if(!checkAlloc(new_node)){ return; }
        } else{
            new_node = new Node{num, topNode};
            if(!checkAlloc(new_node)){ return; }
        }
        topNode = new_node;
        el++;
    } else{
        std::cout << "Stack is full! Can't add any more elements!" << std::endl;
    }
}

void ComplexStack::pop()
{
    if(this->isEmpty() != 1){
        Node* temp = topNode;
        topNode = topNode->back;
        delete temp;
        el--;
    } else{
        std::cout << "Stack is empty!" << std::endl;
    }
}

void ComplexStack::swap(ComplexStack& stack)
{
    Node* temp_node = this->topNode;
    unsigned int temp_el = this->el;
    this->topNode = stack.topNode;
    this->el = stack.el;
    stack.topNode = temp_node;
    stack.el = temp_el;
}

//operators
ComplexStack& ComplexStack::operator+(const ComplexNum& num)
{
    (*this).push(num);
    return *this;
}

ComplexStack& ComplexStack::operator+=(const ComplexNum& num)
{
    return *this + num;
}

//friends
std::ostream& operator<<(std::ostream& os, const ComplexStack& stack)
{
    if(stack.el != 0) {
        ComplexStack::Node *temp = stack.topNode;
        os << "From top to bottom: " << std::endl;
        while (temp != nullptr) {
            os << "> " << temp->num << std::endl;
            temp = temp->back;
        }
    } else{
        std::cout << "Stack is empty!" << std::endl;
    }

    return os;
}