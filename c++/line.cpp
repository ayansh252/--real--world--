#include<iostream>
using namespace std;


inline int product(int a,int b)
{ 
    //Not recommended to use below lines with inline functions

  //  static int c=0; //This evaluates only one
 //   c=c+1;//Next time this function is run ,the value of c will be retained

    return a*b;
}

float moneyreceived(int currentmoney,double factor=1.04)
{
    return currentmoney*factor;
}
int main(){
    // int a,b;
    // cout<<"enter the value of a and b:"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    // cout<<"The product of a and b is :"<<product(a,b)<<endl;
    int money =100000;
        cout<<"If you have "<<money<<"Rs in your bank account,you will receive"<<moneyreceived(money,1.1)<<"Rs after 1 year";
    
    return 0;
}