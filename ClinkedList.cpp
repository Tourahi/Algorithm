#include <iostream>
#include "ClinkedList.h"

ClinkedList::ClinkedList(){
    size = 0;
    Head = NULL;
}

void ClinkedList::insertStart(int data){
    if(Head == NULL){
        Head = new CLnode;
        Head->data = data;
        Head->next = Head;
    }else{
        CLnode* newNode = new CLnode;
        newNode->data = data;
        newNode->next = Head;
        CLnode* tmp = Head;
        //find the last node
        while(tmp->next != Head)
            tmp = tmp->next;
        Head = newNode;
        tmp->next = Head;
    }
}

void ClinkedList::insertEnd(int data){
    if(Head == NULL){
        Head = new CLnode;
        Head->data = data;
        Head->next = Head;
    }else{
        CLnode* newNode = new CLnode;
        newNode->data = data;
        newNode->next = Head;
        //Find the last node
        CLnode* tmp = Head;
        while(tmp->next != Head)
            tmp = tmp->next;
        tmp->next = newNode;
    }
}

//Deleting
int ClinkedList::deleteEnd(){
    CLnode* head = Head;
    while(head->next->next != Head)
        head = head->next;
    CLnode* tmp = head->next; // The head
    head->next = Head;
    int data = tmp->data;
    tmp->next = NULL;
    delete tmp;
    return data;
}

int ClinkedList::deleteStart(){
    CLnode* tmp = Head;
    CLnode* Deltmp = Head;
    while(tmp->next != Head)
        tmp = tmp->next;
    tmp->next = Head->next;
    Head = Head->next;
    int data = Deltmp->data;
    delete Deltmp;
    return data;
}

void ClinkedList::Show(){
    if(Head != NULL) {
        CLnode* tmp = new CLnode;
        tmp = Head;
        do {
            std::cout << tmp->data << "->" ;
            tmp = tmp->next;
        }while(tmp != Head);
        std::cout <<""<<std::endl; ;
    }else{
        std::cout << "The list is empty" << std::endl;
    }
}
