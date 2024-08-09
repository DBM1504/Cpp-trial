#include <iostream>
using namespace std;
int main()
{
    int i,j,temp,arr[10];
    cout<<"Enter elements of the array:";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"The given array is:"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(i=0;i<10;i++)
    {
        temp=0;
        for(j=0;j<9-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<endl<<"The sorted array is:"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
