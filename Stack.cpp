#include <iostream>
#include <string>
#include "Stack.h"


Stack::Stack(int size){
    this->capacity = size;
    this->top = 0;
    this->stk = new int[capacity];
}

bool Stack::isEmpty() {
    if (this->top == -1) return true;
    return false;
}

bool Stack::isFull() {
    if(this->top == this->capacity) return true;
    return false;
}

void Stack::Push(int data) {
    if(!this->isFull()) {
        this->stk[top] = data;
        top += 1;
    }
    else {
        throw "The stack is full you can not push.";
    }
}

int  Stack::Pop() {
    if(!this->isEmpty()) {
            int data = this->stk[top-1];
            top -= 1;
            return data;
    }else {
        throw "The stack is empty you can not pop.";
    }
}

int Stack::Top() {
    return this->stk[top-1];
}

int Stack::Size() {
    return this->capacity;
}

void Stack::print(){
    for(int i = 0; i < capacity;i++)
        std::cout << this->stk[i] << std::endl;
}

