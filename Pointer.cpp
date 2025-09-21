#include <iostream>
using namespace std;

struct Rectangle
{
    int length, breadth;
};

int main()
{
    int a = 10; // general declaration without pointer
    int *b;     // declaration of pointer.. star(*) is used only in declaration.
    b = &a;
    cout << "Bytes taking by a pointer: " << sizeof(b) << endl;
    cout << "This is the address of a: " << &a << endl;
    cout << "This is the value of a: " << *b << endl;               // *b mane value ashbe direct
    cout << "This is the address of a from pointer: " << b << endl; // shudhu b mane a er address ashbe.

    int *p;
    p = new int[5]; // initializing and accessing from Heap memory in C++ and then we have to delete also the memory from the heap
    int A[4] = {0, 1, 2, 3};
    p = A; // Cant use *p=A and also p=&A in the pointer array
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << endl; // if we dont use star(*) then it will print values and if we use star then it will print addresses
    }
    //delete[] p; // deleting from the heap memory that is using in C++

    cout << "--------------------------" << endl;
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;


    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    
}