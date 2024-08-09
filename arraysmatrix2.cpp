/*
//removing the element at a specific position.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int i,j,p;
    cout<<"Enter the position of element to delete: ";
    cin>>p;
    for(i=p-1;i<n-1;i++)
    {
      arr[i]=arr[i+1];
      }
      n=n-1;
    cout<<endl<<"The array after deletion is: "<<endl;

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }

    return 0;
}

/*
//reversing an array
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,4,3,5,7,6,8,10,9};
    int i,j, temp[100];
    cout<<"Array is: "<<endl;
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<10;i++)
    {
        if(i<=4)
            {
                temp[i]=arr[i];
            arr[i]=arr[9-i];
            }
            else
            {
                arr[i]=temp[9-i];
            }
    }
    cout<<endl<<"The reversed array is: ";
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//merging two arrays into a third one
#include<iostream>
 using namespace std;
 int main()
 {
      int n1,n2,i;
     int arr1[5]={1,2,3,4,5};
     int arr2[5]={6,7,8,9,10};
     int arr3[10];
     for(i=0;i<5;i++)
     {
         arr3[i]=arr1[i];
     }
     for(i=0;i<5;i++)
     {
         arr3[i+5]=arr2[i];
     }
     cout<<"Merged array is: "<<endl;
     for(i=0;i<10;i++)
     {
         cout<<arr3[i];
     }
     return 0;
 }


//left rotate
#include <iostream>
using namespace std;
int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int i,j,temp;
   for(i=0;i<10;i++)
   {
       if(i==0)
       {
           temp=arr[i];
           arr[i]=arr[i+1];
       }
       else if(i<9)
       {
           arr[i]=arr[i+1];
       }
       else if(i==9)
       {
           arr[i]=temp;
       }
   }
   cout<<"The shifted array is: "<<endl;
   for(i=0;i<10;i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}

//right rotate
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,j,temp=0;
    for(i=9;i>=0;i--)
    {
        if(i==9)
        {
            temp=arr[i];
            arr[i]=arr[i-1];
        }
        else if(i>0)
        {
            arr[i]=arr[i-1];
        }
        else if(i==0)
        {
            arr[i]=temp;
        }
    }
    cout<<"The array shifted to the right:"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//inserting an element at the end
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,x;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Enter the element :";
    cin>>x;
    arr[n]=x;
    cout<<"The new array is:"<<endl;
    for(i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//inserting an element at specific position
#include <iostream>
using namespace std;
int main()
{
      int x,y,p,n,el;
      int flag=0;
      int arr[100];
      cout<<"Enter the size of array: ";
      cin>>n;
      cout<<endl<<"Enter the elements :";
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      while(flag==0){
      cout<<endl<<"Do you want to insert an element?"<<endl<<"0-yes"<<endl<<"1-No"<<endl;
      cin>>y;
      if(y==0){
            cout<<"Enter the position of new element."<<endl;
      cin>>x;
      p=x-1;
      cout<<endl<<"Enter the element."<<endl;
      cin>>el;
      n++;
      for(int i=n-1;i>p;i--)
      {
          arr[i]=arr[i-1];
      }
      arr[p]=el;
      cout<<"The new array is "<<endl;
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" ";
      }
      flag=0;

      }
      else if(y==1)
      {
          cout<<"The existing array is: "<<endl;
          for(int i=0;i<n;i++)
          {
              cout<<arr[i]<<" ";
          }
          flag=1;
      }
      else
      {
          cout<<endl<<"Invalid entry."<<endl;
          flag=0;
      }
      }
      return 0;
}
*/
//frequency.
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n,i,j,x,y=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl<<"Enter non-zero elements: \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        x=1;
        if(arr[i]!=y)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    y=arr[j];
                    x=x+1;
                }
            }
             cout<<"Frequency of the element '"<<arr[i]<<"':"<<x<<endl;
        }
    }
    return 0;
}
/*
//Printing unique elements
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,2,3,4,5,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,x,y=0;
    int temp[10];
    cout<<"The array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl<<"The unique elements are:\n";
    for(i=0;i<n;i++)
    {
        x=0;
        if(arr[i]!=y)
            {
                for(j=i+1;j<n;j++)
                {
                    if(arr[i]==arr[j])
                    {
                        y=arr[j];
                        x=x+1;
                    }
                }
                if(x==0)
                {
                    cout<<arr[i]<<" ";
                }
            }
    }
    return 0;
}

//deleting repeating numbers
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,2,3,3,4,5,6,6,7,8};
    int i,j,k,n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The array is :\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<endl<<"Array after deletion is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

