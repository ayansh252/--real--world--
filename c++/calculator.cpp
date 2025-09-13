#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    cout << "enter the first number:";
    cin >> a;
    cout << "enter the second number:";
    cin >> b;
    cout << "enter operand (+,-,*,/):";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "the sum of two number is :" << (a + b);
        break;
    case '-':
        cout << "the subtraction of two number is :" << (a - b);
        break;
    case '*':
        cout << "the multiplication of two number is :" << (a * b);
        break;
    case '/':
        cout << "the division of two number is :" << (a / b);
        break;
    default:
        cout << "choose correct operator to perform operation";
        break;
    }
    return 0;
}