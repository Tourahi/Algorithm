#include <iostream>
#include "Queue.h"

Queue::Queue(int size) {
    this->capaicity = size;
    this->front = 0;
    this->rear  = 0;
    this->arr   = new int[this->capaicity];
}

bool Queue::isEmpty() {
    return this->front == 0;
}

bool Queue::isFull() {
    return this->rear == (this->capaicity);
}

int Queue::Front() {
    return this->arr[this->front];
}

int Queue::getSize() {
    return this->capaicity;
}

void Queue::enqueue(int data) {
    if(!isFull()) {
        this->arr[this->rear] = data;
        this->rear++;
    }else {
        throw "The queue is full.";
    }
}

int Queue::dequeue() {
    int data;
    if(!isEmpty()){
        data = this->arr[this->front];
        this->front++;
        return data;
    }else {
        throw "The queue is empty.";
    }
}

void Queue::print() {
    for(int i=this->front;i<this->rear;i++){
        std::cout << this->arr[i] << std::endl;
    }

}



