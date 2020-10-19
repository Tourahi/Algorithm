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

    //Deleting
    int deleteStart();
    int deleteEnd();
    int deletePos(int pos);

    //Getters
    int getSize();

    //Utils
    void Show();
};


#endif // LINKEDLIST_H_INCLUDED
