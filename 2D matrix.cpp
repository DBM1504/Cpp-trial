//Printing a 2d array
/*#include <iostream>
using namespace std;
int main()
{
    int arr[2][5]={
        {1,2,3,4,5},
        {1,2,3,4,5}
        };
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}

//user input values
#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int i,j,n,r;
    cout<<"Enter the rows: ";
    cin>>r;
    cout<<"Enter the columns: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl<<"The 2D array is :"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//sum of each row
#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    int i,j,sum;
    for(i=0;i<2;i++)
    {
        cout<<endl<<"Enter elements of row "<<i+1<<": ";
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        sum=0;
        for(j=0;j<3 ;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"sum of row "<<i+1<<": "<<sum<<endl;
        sum=0;
    }
    return 0;
}

//transpose
#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    int newarray[3][2];
    int i,j;
    for(i=0;i<2;i++)
    {
        cout<<"Enter the elements of row "<<i+1<<": ";
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is :"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"The transpose of the matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            newarray[i][j]=arr[j][i];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<newarray[i][j];
        }
        cout<<endl;
    }
    return 0;
}

//check if a matrix is upper triangular
#include <iostream>
using namespace std;
int main()
{
     int arr[100][100];
     int i,j,r,n,y;
     cout<<"Enter rows: ";
     cin>>r;
     cout<<"Enter columns:";
     cin>>n;
     cout<<"Enter elements: ";
     for(i=0;i<r;i++)
     {
         for(j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
     }
     for(i=0;i<r;i++)
     {
         for(j=0;j<n;j++)
         {
             if(j<i&&arr[i][j]==0)
                 {
                     y=0;
                 }
                 else if(j<i&&arr[i][j]!=0)
                 {
                     y=1;
                 }
         }
     }
     if(y==0)
     {
         cout<<endl<<"It is an upper triangular matrix."<<endl;
         for(i=0;i<r;i++)
         {
             for(j=0;j<n;j++)
             {
                 cout<<arr[i][j]<<" ";
             }
             cout<<endl;
         }
     }
     else
     {
         cout<<endl<<"It is not an upper triangular matrix.";
     }
     return 0;
}

//sort each row
#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int r,n,i,j,k,temp=0;
    cout<<"Enter row: ";
    cin>>r;
    cout<<"Enter column: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];//to print the given array
        }
        cout<<endl;
    }
    cout<<endl<<"The array is"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        temp=0;
        for(j=0;j<n;j++)
        {
            for(k=j;k<n-1;k++)
                {
                    if(arr[i][j]>arr[i][k+1]) //so that it checks with first number of the each row
                    {
                        temp=arr[i][j];
                        arr[i][j]=arr[i][k+1];
                        arr[i][k+1]=temp;
                    }
                }
        }
    }

    cout<<endl<<"The sorted array is "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";//to print sorted array
        }
        cout<<endl;
    }
    return 0;
}

//sorting columns
#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int i,j,r,n,k,temp=0;
    cout<<"Enter rows: ";
    cin>>r;
    cout<<"Enter columns: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl<<"The given array is: "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(j=0;j<n;j++)
    {
        temp=0;
        for(i=0;i<r;i++)
        {
            for(k=i;k<r-1;k++)
            {
                if(arr[i][j]>arr[k+1][j])
                {
                    temp=arr[i][j];
                    arr[i][j]=arr[k+1][j];
                    arr[k+1][j]=temp;
                }
            }
        }
    }
    cout<<endl<<"The sorted array is:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//sum of all elements
#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int r,n,i,j,sum=0;
    cout<<"Enter rows: ";
    cin>>r;
    cout<<"Enter columns: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Array is:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    cout<<"Sum of all the elements in the array = "<<sum;
    return 0;
}

//sum of each row
#include<iostream>
using namespace std;
int main()
{
    int arr[2][5]={
    {1,2,3,4,5},{1,2,3,4,5}
    };
    int i,j,sum;
    cout<<"The array is:"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<2;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"Sum of elements in row "<<i+1<<"= "<<sum<<endl;
    }
    return 0;
}

//sum of each column
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3]={
    {1,2,3},{4,5,6},{7,8,9}
    };
    int i,j,sum=0;
    cout<<"The array is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(j=0;j<3;j++)
        {
            sum=0;
            for(i=0;i<3;i++)
            {
                sum=sum+arr[i][j];
            }
            cout<<endl<<"Sum of column "<<j<<" = "<<sum<<endl;
        }
        return 0;
}
*/
