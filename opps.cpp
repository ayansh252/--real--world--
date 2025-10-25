#include <iostream>
#include <string>
using namespace std;

// 1. CLASS and ENCAPSULATION
class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// 2. INHERITANCE
class Student : public Person {
private:
    int roll;
    string course;

public:
    Student(string n, int a, int r, string c) : Person(n, a) {
        roll = r;
        course = c;
    }

    // Function Overriding 
    void display() override {
        cout << "Student Name: " << getName() 
             << ", Age: " << getAge() 
             << ", Roll No: " << roll 
             << ", Course: " << course << endl;
    }

    // Function Overloading 
    void study() {
        cout << getName() << " is studying.\n";
    }

    void study(string subject) {
        cout << getName() << " is studying " << subject << ".\n";
    }
};

// 3. ABSTRACTION 
class Shape {
public:
    virtual void area() = 0; 
};


class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    cout << "=== OOPs code in one program ===\n";

    Person p("Ayansh", 21);
    p.display();

    Student s("Ayansh", 21, 58, "CSE");
    s.display();
    s.study();
    s.study("OOPs in C++");

    Shape *sh;
    Circle c(5.0);
    sh = &c;
    sh->area();

    return 0;
}
