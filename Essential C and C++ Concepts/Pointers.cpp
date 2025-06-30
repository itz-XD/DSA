#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // int a = 9;
    // int *p;

    // p = &a;

    // cout << "A value: " << a << endl;

    // cout << "P address: " << p << "\nP value: " << *p << endl;

    //********************************* */
    //********************************* */
    // NOTE:
    // -> Whenever you declare something in your program it is going to be created inside the stack

    // -> Using a pointer you can create array in heap
    //********************************* */

    // int a[5] = {2, 4, 6, 8, 10};
    // int *p;
    // p = a;

    // for (int i = 0; i < 5; i++)
    // {
    //     // cout << a[i] << endl;
    //     cout << p[i] << endl;
    // }
    //********************************* */
    // C:~ ARRAY CREATED IN HEAP
    //********************************* */

    // int *p;

    // p = (int *)malloc(5 * sizeof(int));

    // p[0] = 10;
    // p[1] = 20;
    // p[2] = 30;
    // p[3] = 40;
    // p[4] = 50;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << endl;
    // }

    // // Deallocating the memory that is allocated in heap.
    // free(p);

    //********************************* */
    // CPP:~ ARRAY CREATED IN HEAP
    //********************************* */

    // int *p;

    // p = new int[5];

    // p[0] = 12;
    // p[1] = 23;
    // p[2] = 34;
    // p[3] = 45;
    // p[4] = 56;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << endl;
    // }

    // // Deallocating the memory that is allocated in heap.
    // delete[] p;

    //********************************* */
    // Whatever the type of pointer is, size of an pointer is independent of its data.
    //********************************* */

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}