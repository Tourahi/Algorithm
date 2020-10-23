#ifndef CLINKEDLIST_H_INCLUDED
#define CLINKEDLIST_H_INCLUDED


typedef struct CLnode {
    int data;
    CLnode* next;
}CLnode;

class ClinkedList{
    int size;
    CLnode* Head;
public:
    ClinkedList();

    //inserting
    void insertStart(int);
    void insertEnd(int);
//    void insertPos(int,int pos); Not included in the book
    //deleting
    int deleteStart();
    int deleteEnd();

    //Utils
    int getSize();
    void CounNodes();
    void Show();
};



#endif // CLINKEDLIST_H_INCLUDED
