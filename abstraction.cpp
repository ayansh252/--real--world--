#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0; 
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car started successfully!" << endl;
    }
};

int main() {
    Vehicle *v;
    Car c;
    v = &c;
    v->start();
    return 0;
}
