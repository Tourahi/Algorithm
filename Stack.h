#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

//Main stack operations
//•
//•
//Push (int data): Inserts data onto stack.
//int Pop(): Removes and returns the last inserted element from the stack.

//Auxiliary stack operations
//•
//•
//•
//•
//int Top(): Returns the last inserted element without removing it.
//int Size(): Returns the number of elements stored in the stack.
//int IsEmptyStack(): Indicates whether any elements are stored in the stack or not.
//int IsFullStack(): Indicates whether the stack is full or not.

class Stack {
    int  capacity;
    int  *stk;
    int  top;
public:
    Stack(int size);

    // Main Operations
    void Push(int data);
    int  Pop();

    // Auxiliary stack operations
    int Top();
    int Size();
    bool isEmpty();
    bool isFull();
    void print();
};


#endif // STACK_H_INCLUDED
