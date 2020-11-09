#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED


class Queue {
    int front,rear;
    int capaicity;
    int *arr;
public:
    Queue(int size);
    void enqueue(int data);
    int dequeue();

    //Utilities
    int Front();
    int getSize();
    bool isEmpty();
    bool isFull();
    //Print
    void print();
};

#endif // QUEUE_H_INCLUDED
