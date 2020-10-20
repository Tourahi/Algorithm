#ifndef DLINKEDLIST_H_INCLUDED
#define DLINKEDLIST_H_INCLUDED

typedef struct DLnode {
    int data;
    DLnode* next;
    DLnode* prev;
}DLnode;


class DlinkedList{

    DLnode* Head;
    int size;

public:
    DlinkedList();
    //inserting
    void insertStart(int);
    void insertEnd(int);
    void insertPos(int,int pos); // the first index is 1

    //deletion
    int deleteStart();
    int deleteEnd();
    int deletePos(int pos);

    //Utils
    void Show();
    void listLength();
    int getSize();
};

#endif // DLINKEDLIST_H_INCLUDED
