#include <iostream>
using namespace std;
struct Rectangle
{
    int length, breadth; // 4 bytes + 4 bytes = 8 Bytes
    //char x; character takes 1 byte but full stucture will take 4+4+4 = 12 bytes
};

int main()
{
    //struct Rectangle r; //Only Declaration
    struct Rectangle r = {10,5};// ----->>> Declaration + Initialization
    r.length = 15; //can access using dot(.)
    r.breadth = 5; 
    cout<<"Area is:"<<r.length * r.breadth<<endl;
    cout<<sizeof(r.length)<<endl; //----> That will take 8 bytes bcz of the structure is 8 bytes
    cout<<sizeof(r.breadth)<<endl; //----> That will take 8 bytes bcz of the structure is 8 bytes
    //cout<<sizeof(r); //----> That will take 16 bytes bcz of the structure is 8+8 bytes
}
