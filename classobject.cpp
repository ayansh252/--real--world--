#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void input() {
        cout << "Enter your name : ";
        cin >> name;
        cout<<"Enter your roll no: ";
       cin>>roll;
    }

    void show() {
        cout << "Name: " << name << ", Roll No: " << roll << endl;
    }
};

int main() {
    Student s1;  // Object creation
    s1.input();
    s1.show();
    return 0;
}
