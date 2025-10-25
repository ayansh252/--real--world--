#include <iostream>
using namespace std;


int area(int length = 5, int width = 10) {
    return length * width;
}

int main() {
    
    cout << "Area with default values: " << area() << endl;
    cout << "Area with length=7 (width default 10): " << area(7) << endl;
    cout << "Area with length=4 and width=6: " << area(4, 6) << endl;

    return 0;
}
