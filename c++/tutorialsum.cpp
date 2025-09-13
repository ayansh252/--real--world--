#include<iostream>
using namespace std;
int c=45;
int main ()
{
	//*************build in data types********************
/*	int a,b,c;
//	cout<<"enter the value of a:"<<endl;
//	cin>>a;
//		cout<<"enter the value of b:"<<endl;
//	cin>>b;
	c=a+b;
	cout<<"the sum is ="<<c<<endl;
	cout<<"the global value of c:"<<::c;*/
	//******************* float double and long double literals****************
/*	float d =34.4;
	long double e=34.4;
	//cout<<"the value of d is :"<<d<<endl<<"the value of e is :"<<e;
	cout<<"the size of 34.4:"<<sizeof(34.4)<<endl;
	cout<<"the size of 34.4f:"<<sizeof(34.4f)<<endl;
	cout<<"the size of 34.4F:"<<sizeof(34.4F)<<endl;
	cout<<"the size of 34.4l:"<<sizeof(34.4l)<<endl;
	cout<<"the size of 34.4L:"<<sizeof(34.4L)<<endl;*/
	//*******************reference*******************
/*	float x=455;
	float &y=x;
	cout<<x<<endl;
	cout<<y<<endl;*/
	//*******************type casting*********************
	int a=45;
	float b=45.46;
	cout<<"the value of a is :"<<(float)a<<endl;
		cout<<"the value of b is :"<<(int)b<<endl;
		cout<<"the sum is :"<<a+b<<endl;
		cout<<"the sum is :"<<a+(int)b<<endl;
		cout<<"the sum is :"<<a+int(b)<<endl;

	
	
	return 0;
	
}