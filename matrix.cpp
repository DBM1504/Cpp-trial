/*#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[3][2]={1,2,3,4,5,6};
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int rows,clm,i,j;
    int mtx[10][10],mtx2[10][10],sum[10][10];
    cout<<"Enter rows and columns: ";
    cin>>rows>>clm;
    cout<<"Enter elements of 1st matrix: ";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<clm;j++)
        {
            cin>>mtx[i][j];
        }
    }
    cout<<"The first matrix is :\n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<clm;j++)
        {
            cout<<mtx[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter elements of 2nd matrix:";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<clm;j++)
        {
            cin>>mtx2[i][j];
        }
    }

    cout<<"The second matrix is :"<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<clm;j++)
        {
            cout<<mtx2[i][j]<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<clm;j++)
        {
            sum[i][j]=mtx[i][j]+mtx2[i][j];
        }
        cout<<endl;
    }
    cout<<"The sum of the matrices is: ";


    for(i=0;i<rows;i++)
    {
        for(j=0;j<clm;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
