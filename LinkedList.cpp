#include<iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
    size = 0;
    Head = NULL;
}

void LinkedList::listLength() {
    Node* current = Head;
    size = 0;
    while(current->next != NULL) {
        size++;
        current = current->next;
    }
    size++;
}

int LinkedList::getSize() {
    listLength();
    return size;
}

void LinkedList::insertStart(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    if(Head == NULL){
       Head = new Node;
       Head->data = data;
       Head->next = NULL;
    }else{
        newNode->next = Head;
        Head = newNode;
    }
}

void LinkedList::insertEnd(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(Head == NULL){
       Head = new Node;
       Head->data = data;
       Head->next = NULL;
    }else{
        Node* tmp = Head;
        while(true) {
            if(tmp->next == NULL){
                tmp->next = newNode;
                break;
            }
            tmp = tmp->next;
        }
    }
}

void LinkedList::insertPos(int data,int pos) {
    int position = 1;
    Node* newNode = new Node;
    newNode->data = data;
     if(Head == NULL){
       Head = new Node;
       Head->data = data;
       Head->next = NULL;
    }else {
        Node* tmp = Head;
        Node* insertPos = tmp;
        while(tmp != NULL && position < pos) {
            position++;
            insertPos = tmp;
            tmp = tmp->next;
        }
        insertPos->next = newNode;
        newNode->next = tmp;
    }
}

void LinkedList::Show(){
    if(Head == NULL) {
        std::cout << "List is Empty" << std::endl;
    }
    Node* list = Head;
    while(list != NULL) {
        std::cout << list->data
                  << "->" ;
        list = list->next;
    }
}


