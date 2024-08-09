#include <iostream>
using namespace std;
int main()
{
    const int n=10;//because size of array already mentioned in question
    int num[n], even[n], odd[n];
    int ev=0, od=0;
    int i,j;
    cout<<"Enter the elements in the array: ";
    for(i=0;i<n;i++) //to enter the elements by user.
    {
        cin>>num[i];
    }
    cout<<"The array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<num[i]<<" ";//to print the array
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0) //to check if even
        {
            even[ev++]=num[i];//every time ev increases by one. ev was initially 0
        }
        else//to check if odd
        {
            odd[od++]=num[i];//every time od increaes by one. od was initially 0
        }
    }
    cout<<endl<<"The array with even numbers: "<<endl;
    for(j=0;j<ev;j++)
    {
        cout<<even[j]<<" ";
    }
    cout<<endl<<"The array with odd numbers: "<<endl;
    for(j=0;j<od;j++)
    {
        cout<<odd[j]<<" ";
    }
    return 0;
}
