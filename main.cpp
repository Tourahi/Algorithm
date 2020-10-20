#include <iostream>
//#include "recursion.h"
#include "DlinkedList.h"

int main()
{
    DlinkedList list;
    list.insertStart(1);
    list.insertStart(2);
    list.insertStart(3);
    list.insertEnd(4);
    list.insertPos(100,2);
    list.Show();
    list.deleteStart();
    list.deleteEnd();
    list.Show();
    list.deletePos(0);
    list.Show();
    return 0;
}
