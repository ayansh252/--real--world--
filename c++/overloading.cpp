#include<iostream>
using namespace std;

int sum(int a,int b)
{
    cout<<"using function with two arguments"<<endl;
    return a+b;
}

// calculate the volume if cylinder
double volume(double r,int h)
{
    return (3.14*r*r*h);
}

//calculate the volume of cube
int volume(int a)
{
    return(a*a*a);
}

//calculate the volume of rectangle box
int volume(int l,int b ,int h)
{
    return (l*b*h);
}
int sum(int a,int b,int c)
{
    cout<<"using function with three arguments"<<endl;
    return a+b+c;

}
int main(){
     
    //  cout<<"the sum of 3and 6 is:"<<sum(3,6)<<endl;
    //  cout<<"the sum of 3, 6 and 9 is:"<<sum(3,6,9)<<endl;
     cout<<"the volume of cylinder of radius 6.344 and height is 45 :"<<volume(6.344,45)<<endl;
     cout<<"the volume of cube  of side is 45 :"<<volume(45)<<endl;
     cout<<"the volume of cuboid or rectangle box  of length 45 width 67and height is 45 :"<<volume(45,67,45)<<endl;
    
    return 0;
}