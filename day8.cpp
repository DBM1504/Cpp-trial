#include <iostream>
using namespace std;
void fun(int ar[100], int si)
{
    for(int i=0;i<si;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main()
{
    int arr[ ]={23,45,67,34,12};
    int siz=sizeof(arr)/sizeof(arr[0]);
    fun(arr, siz);
    return 0;
}
