#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,1,5,8};
    int i,j;
    cout<<"The repeating number is ";
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<endl;
            }
        }

    }
    return 0;
}

