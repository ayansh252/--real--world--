#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

float multiply(float a, float b) {
    return a * b;
}


int multiply(int a, int b, int c) {
    return a * b * c;
}

int main() {
  
    cout << "Multiplication of 5 and 6 (int): " << multiply(5, 6) << endl;


    cout << "Multiplication of 3.5 and 2.2 (float): " << multiply(3.5f, 2.2f) << endl;

    cout << "Multiplication of 2, 3 and 4 (int): " << multiply(2, 3, 4) << endl;

    return 0;
}
