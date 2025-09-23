#include <iostream>
using namespace std;

// Array always take pass by reference.. so if a change anything in the function then it will change the original array also.
void func(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

int main()
{
    int A[5]; // In the memory integers take 4 bytes
    A[0] = 5;
    A[1] = 10;
    A[2] = 15;

    cout << "---------------------------" << endl;
    int B[] = {2, 4, 6}; // also can skip the size
    // int C[]; -----> we cant declare empty array size
    cout << sizeof(A) << endl; // that will show 20(each 4bytes * 5) ---->> endl means new line in CPP
    cout << A[1] << endl;
    printf("%d\n", A[1]); // can use C in cpp

    // For each loop
    for (int i : B)
    {
        cout << i << endl;
    }

    cout << "---------------------" << endl;
    int n;
    cout << "Enter the size:";
    cin >> n;
    int C[n];
    for (int i = 0; i < n; i++)
    {
        C[i] = i * 2;
    }
    for (int i : C)
    {
        cout << i << endl;
    }

    cout << "----------Passing Array using Function-----------" << endl;
    // 2D Array
    int D[4] = {0, 1, 2, 3};
    func(D, 4);

    return 0;
}
