#include<stdio.h>

void display(int a[],int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

void deletion(int a[],int n,int pos)
{
    for (int i = pos; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    
}
 int main()
 {
   int arr[]={1,2,3,4,5,6};
   int n=sizeof(arr)/sizeof(arr[0]);
   display(arr,n);
   int pos=3;
   deletion(arr,n,pos);
   printf("\n");
   display(arr,n-1);
 }