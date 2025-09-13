#include <iostream>
using namespace std;
void pairadd(int a[],int n,int target)
{
    int i=0;int j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==target)
        {
            cout<<a[i]<<" "<<a[j];
            return  ;
        }
        if(a[j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}
int main() {
      int a[]={1,2,3,4,5,6,7};
   int n=sizeof(a)/sizeof(a[0]);
    int target=11;
    pairadd(a,n,target);
    return 0;
}
