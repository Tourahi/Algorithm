#include <iostream>
//#include "recursion.h"
//#include "ClinkedList.h"
#include "Queue.h"

int main()
{
    Queue Q(4);

    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    Q.enqueue(4);
    Q.print();
    try{
        Q.enqueue(5);
    }catch(const char* err) {
        std::cout << err << std::endl;
        Q.print();
    }




//    Stack S(4);
//
//    S.Push(1);
//    S.Push(2);
//    S.Push(3);
//    S.Push(4);
//    S.print();
//    try{
//        S.Push(5);
//    }catch(const char* err) {
//        std::cout << err << std::endl;
//        S.print();
//    }


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
