#include<iostream>
using namespace std ;

int main ()
{
	int num1,num2;
	cout<<"enter the numnber 1:";/*"<<" is called insertion operator*/
	cin>>num1;
	cout<<"enter the numnber 2:";/*"<<" is called exertion operator*/
	cin>>num2;
	cout<<"sum of two numer is :"<<num1+num2;
	int a=5,b=4;
	cout<<"the arithmetic operator"<<endl;
	cout<<"the value of a+b"<<a+b<<endl;
	cout<<"the value of a-b"<<a-b<<endl;
	cout<<"the value of a*b"<<a*b<<endl;
	cout<<"the value of a/b"<<a/b<<endl;
	cout<<"the value of a%b"<<a%b<<endl;
	cout<<"the comparison operator"<<endl;
	cout<<"the value of a==b is"<<(a==b)<<endl;
		cout<<"the value of a!=b is"<<(a!=b)<<endl;
			cout<<"the value of a<=b is"<<(a<=b)<<endl;
				cout<<"the value of a>=b is"<<(a>=b)<<endl;
					cout<<"the value of a<b is"<<(a<b)<<endl;
						cout<<"the value of a>b is"<<(a>b)<<endl;
						
						cout<<"the logical operator"<<endl;
						cout<<"the logical and operator ((a==b)&&(a<b)):"<<((a==b)&&(a<b))<<endl;
						cout<<"the logical or operator ((a==b)||(a<b)):"<<((a==b)&&(a<b))<<endl;
						cout<<"the logical not  operator :"<<(!(a==b))<<endl;
						
						
						
					
	return 0;
	}