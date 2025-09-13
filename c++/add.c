#include<iostream>
using namespace std;
void add(int a[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(a[i]+a[j]==target)
            {
                cout<<i+1<<" "<<j+1;
                return ;
            }
        }
    }
}
int main() {
     int a[]={1,2,3,4,5,6,7};
   int n=sizeof(a)/sizeof(a[0]);
add(a,n,9);
    return 0;
}

