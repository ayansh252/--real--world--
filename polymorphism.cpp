#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area(int n) {    
        cout << "Area of shape\n";
    }
};

class Circle : public Shape {
public:
    void area(int n) {
        cout << "Area of Circle ="<<3.14*n*n;
    }
};

int main() {
    Shape *s;
    Circle c;
    s = &c;
    s->area(5);  
    return 0;
}
