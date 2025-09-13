#include<stdio.h>

void display(int a[],int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int insertion(int a[],int size,int capacity,int element,int pos)
{
    if(size>=capacity)
    {
        return -1;
    }
    for (int  i =size-1; i>=pos; i--)
    {
        a[i+1]=a[i];
        
    }
    a[pos]=element;
    return 1;
}
int main()
{
    int arr[100]={1,2,3,4,5,78};
    int n=sizeof(arr)/sizeof(arr[0]);
    int element=25;
    int pos=4;
    display(arr,6);
    insertion(arr,6,100,element,pos);
    printf("\n");
    display(arr,7);
}