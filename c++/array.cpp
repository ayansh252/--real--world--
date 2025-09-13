#include <iostream>
using namespace std;

int main()
{
    int ar[5] = {45, 47, 48, 49, 50};
    int *p = ar;
    // cout<<ar[0]<<endl;
    // cout<<ar[1]<<endl;
    // cout<<ar[2]<<endl;
    // cout<<ar[3]<<endl;
    // cout<<ar[4]<<endl;
    // for (int  i = 0; i < 5; i++)
    // {
    //     cout<<ar[i]<<endl;
    //     /* code */
    // }
    int i = 0;
    //     while(i<5)
    //     {
    // cout<<*p<<endl;
    // i++;p++;
    //     }
    do
    {
        cout << &ar[i] << endl;
        i++;
        /* code */
    } while (i < 5);
    // pointers and array
    cout<<"the value of marks[0] is:"<<*p<<endl;
    cout<<"the value of marks[1] is:"<<*(p+1)<<endl;  
    cout<<"the value of marks[2] is:"<<*(p+2)<<endl;
    cout<<"the value of marks[3] is:"<<*(p+3)<<endl;
    return 0;
}