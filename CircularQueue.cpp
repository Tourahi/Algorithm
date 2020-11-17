#include <iostream>
#include "CircularQueue.h"


bool CircularQueue::IsEmpty() {
    return this->front == -1;
}

bool CircularQueue::IsFull() {
    return (this->rear + 1)%this->capacity == this->front;}

int CircularQueue::GetQueueSize() {
    return (this->capacity - this->front + (this->rear+1))%this->capacity;
}

void CircularQueue::EnQueue(int data) {
    if(IsFull())
        std::cout<< "Queue Overflow." <<std::endl;
    else {
        this->rear = (this->rear+1)%this->capacity;
        this->arr[this->rear] = data;
        if(this->front == -1)
            this->front = this->rear;
    }
}

int CircularQueue::DeQueue() {
    int data = 0;
    if(IsEmpty()){
       std::cout<< "Queue is empty." <<std::endl;
       return 0;
    }
    else {
        data = this->arr[this->front];
        if(this->front == this->rear)
            this->front = this->rear = -1;
        else this->front = (this->front + 1) % this->capacity;
    }
    return data;
}

void CircularQueue::print() {
    for(int i=this->front;i<=this->rear;i++){
        std::cout << this->arr[i] << std::endl;
    }

}


