#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person { 
public:
    int roll;
    void display() {
        cout << "Name: " << name <<endl<< " Age: " << age <<endl<< "Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.name = "Rohit";
    s.age = 20;
    s.roll = 101;
    s.display();
    return 0;
}
