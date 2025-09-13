#include<stdio.h>
// int binary(int a[],int n,int target)
// {
//     int high=n-1;
//     int low=0;
//     while(low<high)
//     {
//         int mid=low+high/2;
//         if(a[mid]==target)
//         {
//             return mid;
//         }
//         if(a[mid]>target)
//         {
//             high=mid+1;
//         }
//         else{
//             low=mid-1;
//         }
//     }
//     return -1;
// }
 int linear(int a[],int n,int target)
 {
     for(int i=0;i<n;i++)
     {
         if(a[i]==target)
         {
             return i;
         }
     }
     return -1;
 }
int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int target=8;
    int p=linear(a,n,target);
    if(p==-1)
    {
        printf("element not found");
    }
    else{
        printf("element found at index is %d",p);
    }
    return 0;
}