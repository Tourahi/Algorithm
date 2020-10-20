#include <iostream>
#include "DlinkedList.h"

DlinkedList::DlinkedList(){
    size = 0;
    Head = NULL;
}


void DlinkedList::insertStart(int data){

    if(Head == NULL) {
        Head = new DLnode;
        Head->next = NULL;
        Head->prev = NULL;
        Head->data = data;
    }else{
        DLnode* newNode = new DLnode;
        newNode->data = data;
        newNode->next = Head;
        newNode->prev = NULL;
        Head->prev = newNode;
        Head = newNode;
    }
}

void DlinkedList::insertEnd(int data) {
    if(Head == NULL) {
        insertStart(data);
    }else{
        DLnode* newNode = new DLnode;
        newNode->data = data;
        newNode->next = NULL;
        DLnode* tmp = Head;
        while(tmp->next != NULL) {
            tmp = tmp->next;
        }
        newNode->prev = tmp;
        tmp->next = newNode;
    }
}

void DlinkedList::insertPos(int data,int pos) {
    if(Head == NULL) {
        insertStart(data);
    }else {
        int position = 0;
        DLnode* newNode = new DLnode;
        newNode->data = data;
        DLnode* tmp = Head;
        while(tmp->next != NULL && position < (pos-2)) {
            position++;
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
    }
}

int DlinkedList::deleteStart(){
    if(Head != NULL) {
        DLnode* tmp = Head;
        Head = Head->next;
        Head->prev = NULL;
        int data = tmp->data;
        delete tmp;
        return data;
    }
}

int DlinkedList::deleteEnd(){
    if(Head != NULL){        DLnode* tmp = Head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->prev->next = NULL;
        tmp->prev = NULL;
        int data = tmp->data;
        delete tmp;
        return data;
    }
}

int DlinkedList::deletePos(int pos){
    if(Head != NULL && pos < getSize() && pos > 0) {
        DLnode* tmp = Head;
        int position = 0;
        while(tmp->next != NULL && position != pos) {
            std::cout << position << std::endl;
            position++;
            tmp = tmp->next;
        }
        tmp->prev->next = tmp->next;
        tmp->next->prev = tmp->prev;
        tmp->next = NULL;
        tmp->prev = NULL;
        int data = tmp->data;
        delete tmp;
        return data;
    }else{
        if (pos >= getSize())
            return deleteEnd();
        if (pos == 0)
            return deleteStart();
    }
}

// Utils
void DlinkedList::Show(){
    if(Head == NULL) {
        std::cout << "List is Empty" << std::endl;
    }
    DLnode* tmp = Head;
    while(tmp != NULL) {
         std::cout << tmp->data
                  << "->" ;
        tmp = tmp->next;
    }
    std::cout << "" << std::endl;
    std::cout << "Size :: " << getSize() + 1 << std::endl;
}

void DlinkedList::listLength() {
    DLnode* current = Head;
    size = 0;
    while(current->next != NULL) {
        size++;
        current = current->next;
    }
}

int DlinkedList::getSize() {
    listLength();
    return size;
}
