#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c =a+b;
    return c;
}
void great(void);

// This will not swap a and b
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

// call by reference using pointer 
void swappointer(int* a,int* b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}

//call by reference using c++ reference variables
void swapreference( int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
}
int main ()
{
    int num1,num2;
    cout<<"enter the first number:"<<endl;
    cin>>num1;
    cout<<"enter the second number:"<<endl;
    cin>>num2;
  //  cout<<"the sum is:"<<sum(num1,num2)<<endl;;
    // great();
     //swap(num1,num2);//will not swap the value at main function
     //swappointer(&num1,&num2);// This wiil swap num1 and num2 using  pointer reference
     swapreference(num1,num2);// This wiil swap num1 and num2 using  reference variables
     cout<<"The num1 is:"<<num1<<endl<<"The num2 is :"<<num2;
    return 0;
}
void great(void)
{
    cout<<"hello world";
}