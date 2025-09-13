#include<iostream>
using namespace std;

int factorial(int n){
 if(n<=1)
 {
    return 1;
 }
 else 
 {
    return n * factorial(n-1);
 }
}

int fibonacci(int n)
{
    if(n<=1)
    return 1;
    else
    return fibonacci(n-2)+fibonacci(n-1);
}

int main(){
    //0!=1 by definition
    //1!=1 by definition
    int a;
     cout<<"enter the number to find out the fibonacci:";
    cin>>a;
    // cout<<"enter the number to find out the factorial:";
    // cin>>a;
    // cout<<"the factorial is:"<<factorial(a);
    cout<<"the fibonacci sereis is :"<<fibonacci(a);
    return 0;
}