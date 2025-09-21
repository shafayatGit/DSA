#include <iostream>
using namespace std;
int main(){
    int a = 10; //general declaration without pointer
    int *b; // declaration of pointer
    b= &a;
    cout<<&a<<endl;
    cout << *b <<endl; // *b mane value ashbe direct
    cout<<b; //shudhu b mane a er address ashbe.

    int *p;
    p = new int [5]; //accessing from Heap memory
}