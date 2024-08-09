/*
//FUNCTIONS

#include <iostream>
using namespace std;
void greet()
{
    cout<<"Hello world!";
}
int main()
{
    int n;
    cin>>n;
    if(n==0){
    greet();
    }
   return 0;
}

#include <iostream>
using namespace std;
void print(int n)
{
    cout<<n;
}
int main()
{
    int i;
    cout<<"Enter a number :";
    cin>>i;
    cout<<"The number is ";
    print(i);
    return 0;
}
//sum
#include <iostream>
using namespace std;
int main()
{
    int num[5]={45,34,76,56,22};
    int sum=0;
    cout<<"Array is :";
    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<" ";
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+num[i];
    }
    cout<<endl<<"Sum of elements in the array = "<<sum;
    return 0;
}

//max
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={34,5,45,76,15,23,86,45,6,11};
    int x=arr[0];
    cout<<"Array: ";
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<9;i++)
    {
        if(x<arr[i])
        {
            x=arr[i];
        }
    }
    cout<<endl<<"The largest element in the array is "<<x;
    return 0;

}

//Removing an element from 1D array
#include <iostream>
using namespace std;
int main()
{
    int i,j,n,x;
    int arr[5]={11,22,33,44,55};
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number to remove: ";
    cin>>x;
    cout<<"Array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
    {
        n=n-1;
        for(j=i;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
    }
    }
    cout<<endl<<endl<<"Resulting array after removing "<<x<<" is :"<<endl;
    for(j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}
/*
//max and min element
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={23,44,3,5,15,2,6,4,3,50};
    int x=0;
    for(int i=0;i<10;i++)
    {
        if(x<arr[i])
        {
            x=arr[i];
        }
    }
    cout<<"The element with max value is "<<x<<endl;
    for(int i=0;i<10;i++)
    {
        if(x>arr[i])
        {
            x=arr[i];
        }
    }
    cout<<"The element with min value is "<<x;
    return 0;
}

//second largest
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={23,44,3,5,15,2,6,4,3,50};
    int y=0;
    int x=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>x)
        {
            y=x;
            x=arr[i];
        }
    }
    cout<<"Second largest number is "<<y;
    return 0;
}

//from user
#include <iostream>
using namespace std;
int main()
{
    int n,arr[100];
    int y=0;
    int x=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            y=x;
            x=arr[i];
        }
    }
    cout<<"Second largest number is "<<y;
    return 0;
}


//number of odd and even numbers
#include <iostream>
using namespace std;
int main()
{

    int n,x,y;
    int numbers[10]={1,2,3,4,5,6,7,8,9,10};
    int even[100],odd[100];

    for(int i=0;i<10;i++)
    {
        if(numbers[i]%2==0)
        {
            cout<<

        }
        else if(numbers[i]%2!=0)
        {
            odd[i]=numbers[i];
        }
    }
    x=sizeof(even)/sizeof(even[0]);
    y=sizeof(odd)/sizeof(odd[0]);
    cout<<"There are "<<x<<" even numbers and "<<y<<" odd numbers in the array.";
    return 0;
}

//ascending order
#include <iostream>
using namespace std;
int main()
{
    int i,j,temp;
    int arr[5]={5,6,7,3,1};
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
//one array to another
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int narr[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        narr[i]=arr[i];
    }
    cout<<"Elements in the new array:"<<endl;
    for(j=0;j<5;j++)
    {
        cout<<narr[j];
    }
    return 0;
}
*/
