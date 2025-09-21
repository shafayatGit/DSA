#include <iostream>
using namespace std;
int main()
{
    int A[5]; //In the memory integers take 4 bytes
    A[0] = 5;
    A[1] = 10;
    A[2] = 15;
    A[3] = 20;

    cout << sizeof(A) << endl; //that will show 20(each 4bytes * 5) ---->> endl means new line in CPP
    cout<< A[1];
    return 0;
}
