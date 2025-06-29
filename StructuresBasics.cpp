#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    // char x;
};

int main()
{
    struct Rectangle r1 = {10, 5};

    // cout << sizeof(r1);

    r1.length = 12;
    r1.breadth = 24;

    cout << r1.length << endl;
    cout << r1.breadth << endl;

    return 0;
}