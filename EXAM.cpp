#include <iostream>
using namespace std;

void transpose(int arr[3][3],int transposed[3][3],int i, int j)
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            transposed[i][j]=arr[j][i];
        }
    }
    cout<<"The transposed array is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<transposed[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][3];
    int i,j, tran[3][3];
    cout<<"Enter elements for the 3x3 matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Given 2d array is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    transpose(arr,tran,i,j);

    return 0;
}
