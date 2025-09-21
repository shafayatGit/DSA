#include <iostream>
using namespace std;
struct Rectangle
{
    int length, breadth; // 2 bytes + 2 bytes = 4 Bytes
};

int main()
{
    //struct Rectangle r; //Only Declaration
    struct Rectangle r = {10,5};// ----->>> Declaration + Initialization
    r.length = 15; //can access using dot(.)
    r.breadth = 5; 
    cout<<"Area is:"<<r.length * r.breadth;
}
