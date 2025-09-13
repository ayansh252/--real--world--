#include <iostream>
using namespace std;
void triplesum(int a[],int n,int target)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=n-1;k>0;k++)
            {
                int u=a[i]+a[j]+a[k];
                if(u==target)
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k];
                    return;
                }
            }
        }
    }
}
int main() {
      int a[]={1,2,3,4,5,6,7};
   int n=sizeof(a)/sizeof(a[0]);
triplesum(a,n,9);

    return 0;
}

