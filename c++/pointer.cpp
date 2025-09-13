#include <iostream>
using namespace std;

int main()
{
    // what is a pointer ?......>data type which holds the address of other data types
    //  &----------->addresss of operator
    //  *----------->dereference operator

    int a = 9;
    int *b = &a;
    cout << b << endl;
    cout << "the address of a is :" << &a << endl;
    cout << "the address of a is :" << b << endl;
    cout << "the value at address b:" << *b << endl;

    // pointer to pointer
    int **c = &b;
    cout << "the address  of b is :" << &b << endl;
    cout << "the address  of b is :" << *c << endl;
    cout << "the value of b is :" << **c << endl;
    cout << "the value  at address c :" << *c << endl;

    return 0;
}