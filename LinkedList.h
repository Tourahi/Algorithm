#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

typedef struct Node{
    int data;
    Node* next;
}Node;

class LinkedList {
    Node* Head;
    int size;

public:
    LinkedList();
    void listLength();
    // Inserting
    void insertStart(int data);
    void insertEnd(int data);
    void insertPos(int data,int pos);
    void Show();

    //Getters
    int getSize();
};


#endif // LINKEDLIST_H_INCLUDED
