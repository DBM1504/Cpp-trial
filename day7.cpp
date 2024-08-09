#include <iostream>
using namespace std;
int main()
{
    int arr[100], n,key,flag=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Elements are: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    /*cout<<"The elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}



    for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
}
cout<<"The sum is "<<sum;
return 0;
}
*/
int x=arr[0];
for(int i=0;i<n;i++)
{
    if(x<arr[i])
    {
        x=arr[i];
    }
}
    cout<<"The largest number is "<<x ;
    return 0;
}

