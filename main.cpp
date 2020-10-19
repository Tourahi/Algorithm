#include <iostream>
//#include "recursion.h"
#include "LinkedList.h"

int main()
{
    LinkedList list;
    list.insertStart(1);
    list.insertStart(2);
    list.insertStart(3);
    list.insertEnd(4);
    list.insertPos(5,2);
    list.Show();
    std::cout << "" << std::endl;
    std::cout << list.getSize() << std::endl;
    return 0;
}
