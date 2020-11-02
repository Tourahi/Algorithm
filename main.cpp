#include <iostream>
//#include "recursion.h"
//#include "ClinkedList.h"
#include "Stack.h"

int main()
{
    Stack S(4);

    S.Push(1);
    S.Push(2);
    S.Push(3);
    S.Push(4);
    S.print();
    try{
        S.Push(5);
    }catch(const char* err) {
        std::cout << err << std::endl;
        S.print();
    }


//    list.insertEnd(1);
//    list.insertEnd(3);
//    list.insertEnd(4);
//    list.insertEnd(5);
//    list.insertStart(100);
////    list.deleteEnd();
////    list.deleteEnd();
////    list.deleteStart();
//    list.Show();
    return 0;
}
