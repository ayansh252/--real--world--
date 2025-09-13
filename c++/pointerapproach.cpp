#include <iostream>
using namespace std;
void triplesum(int a[],int n,int target)
{
    int i=0;
    int j=i+1;
    int k=n-1;
    while(i<k)
    {
        if(a[i]+a[j]+a[k]==target)
        {
            cout<<a[i]<<" "<<a[j]<<" "<<a[k];
            return ;
        }
        if(a[k]>target)
        {
            k--;
        }
        else if(a[j]>target)
        {
            j--;
        }
        else if(a[j]<target)
        {
            j++;
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
triplesum(a,n,9);

    return 0;
}