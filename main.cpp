#include <iostream>
//#include "recursion.h"
#include "ClinkedList.h"

int main()
{
    ClinkedList list;
    list.insertEnd(1);
    list.insertEnd(3);
    list.insertEnd(4);
    list.insertEnd(5);
    list.insertStart(100);
//    list.deleteEnd();
//    list.deleteEnd();
//    list.deleteStart();
    list.Show();
    return 0;
}
