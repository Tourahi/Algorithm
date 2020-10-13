#include <iostream>
#include <string>
#include "../recursion.h"


int Fact(int n) {
    if(n==1 || n==0)
        return 1;
    else
        return n*Fact(n-1);}

void TowerOfHanoi(int n,char A ,char B,char C) {
    if(n > 0) {
        TowerOfHanoi(n-1 ,A,C,B);
        std::cout << "Moving a disc from " << A << " "
        "TO" << " " << C << std::endl;
        TowerOfHanoi(n-1 ,B,A,C);
    }
}

void Binary(int n,std::string BinaryString) {
    if(n < 1) {
        std::cout << BinaryString << std::endl;
        BinaryString.clear();
    }
    else{
        Binary(n-1 , BinaryString+"0");
        Binary(n-1 , BinaryString+"1");
    }
}

