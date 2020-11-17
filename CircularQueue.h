#ifndef CIRCULARQUEUE_H_INCLUDED
#define CIRCULARQUEUE_H_INCLUDED

class CircularQueue {
    int front,rear;
    int capacity;
    int *arr;

public:

    CircularQueue(int size) {
        this->capacity = size;
        this->front = this->rear = -1;
        this->arr  = new int[this->capacity];
    }

    bool IsEmpty();
    bool IsFull();
    int GetQueueSize();
    void EnQueue(int data);
    int DeQueue();
    //Print
    void print();
};

#endif // CIRCULARQUEUE_H_INCLUDED
