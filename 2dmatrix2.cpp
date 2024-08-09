//sum of two matrices
/*#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={9,8,7,6,5,4,3,2,1};
    int i,j,sum[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<endl<<"Array 1 + Array 2 :"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//multiplication
#include <iostream>
using namespace std;
int main()
{
    int arr[3][2]={
    {1,2},{3,4},{5,6}};
    int arr2[2][3]={
    {1,2,3},{4,5,6}};
    int sum[3][3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=j;k<2;k++)
            {
                sum[i][j]=(arr[j][k]*arr2[k][j])+(arr[j][k+1]*arr[k+1][j]);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}//wrong


//sum of diagonal elements
#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int r,n,i,j,sum=0,sum1=0;
    cout<<"Enter size of the square matrix:";
    cin>>r;
    cout<<"Enter elements: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Array is:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Major diagonal elements are:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==j)
            {
                cout<<arr[i][j]<<" ";
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<endl<<"Minor diagonal elements are: "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(j==r-i-1)
            {
                cout<<arr[i][j]<<" ";
                sum1=sum1+arr[i][j];
            }
        }
    }
    cout<<endl<<"Sum of the major diagonal elements is: "<<sum;
    cout<<endl<<"Sum of the minor diagonal elements is:"<<sum1;
    return 0;
}

//interchange diagonals
#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int i,j,n,temp;
    cout<<"Enter size of the square matrix: ";
    cin>>n;
    cout<<"Enter elements:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Given array: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        temp=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                temp=arr[i][j];
                arr[i][j]=arr[i][n-i-1];
                arr[i][n-i-1]=temp;
            }
        }
    }
    cout<<endl<<"Array after interchanging the diagonals:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Sort alphabets
#include <iostream>
using namespace std;
int main()
{
    char letter[10]={'E','F','G','A','B','C','D','I','J','H'};
    int i,j,temp,k;
    char alph='A';
    alph=65;
    for(k=65;k<76;k++)
    {
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(letter[i]>letter[j])
        {
            temp=letter[i];
            letter[i]=letter[j];
            letter[j]=temp;
        }

    }
    }
    }
    cout<<"Sorted array is:"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<letter[i]<<" ";
    }
    return 0;
}
*/
//determinant
#include <iostream>
using namespace std;
