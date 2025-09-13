#include<iostream>
using namespace std;
int main ()
{    //**********selection control structure if-else-if-ladder***************
     int age;
     cout<<"tell me your age"<<endl;
     cin>>age;
    // if(age<18)
    // {
    //     cout<<"you can't come in my party"<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"you are a kid and you will get the pass to the party"<<endl;
    // }
    // else if(age<1)
    // {
    //     cout<<"you are not yet born"<<endl;
    // }
    // else{
    //     cout<<"you can come to the party"<<endl;
    // }switch case statement
    switch (age)
    {
    case 18:
    cout<<"you are 18";
        break;
         case 22:
    cout<<"you are 22";
        break;
     case 2:
    cout<<"you are 2";
        break;
    default:
    cout<<"no special cases";
        
    }
     
    return 0;
}