#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int id;
    char favchar;
    float salary;
}ep;

union money 
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    
    enum meal {breakfast,lunch,dinner};
    meal m1=lunch;
    cout<<m1<<endl;
    cout<<(m1==1)<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice=45;
    // m1.car='r';
    // cout<<m1.car;

    // ep ayansh;
    // struct employee rohan;
//     ayansh.id=1;
//     ayansh.favchar='u';
//     ayansh.salary=120000000;

// cout<<"The value is"<<ayansh.salary<<endl;
// cout<<"The value is"<<ayansh.favchar<<endl;
// cout<<"The value is"<<ayansh.id<<endl;

    return 0;
}