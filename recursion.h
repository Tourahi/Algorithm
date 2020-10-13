#ifndef RECURSION_H_INCLUDED
#define RECURSION_H_INCLUDED

int Fact(int n);

// Steps : note (n is the number of discs)
// initial state : all Discs are in A
// Move n-1 from A to B using C as an aux
// Move a Disc (the last one) from A to C
// Move n-1 from B to C using A as an aux
// DONE
// if you call the function like : TowerOfHanoi(n,A,B,C)
// then A is the source tower, B the auxiliary tower, C the destination tower
// base case (n <= 0)
void TowerOfHanoi(int n , char from , char aux , char to);
void Binary(int n,std::string BinaryString);

#endif // RECURSION_H_INCLUDED
