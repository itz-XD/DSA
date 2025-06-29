#include <iostream>
using namespace std;

int main()
{
    int A[5];
    A[1] = 1122;
    A[3] = 3344;
    A[4] = 4455;

    int B[5] = {1, 2, 3, 4, 5};

    // normal for loop
    for (int i = 0; i < 5; i++)
    {
        // cout << A[i] << endl;
    }

    // for each loop
    for (int X : B)
    {
        cout << X << endl;
    }
    return 0;
}