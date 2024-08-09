/*Write a program in C++ to find the last prime number that occurs before the entered number.
Sample Output:
Input a number to find the last prime number occurs before the number: 50
47 is the last prime number before 50*/
#include <iostream>
using namespace std;
int main()
{
    int n,i,j,flag=0;
    cout<<"Find the last prime number that occurs before the given number."<<endl;
    cout<<"---------------------------------------------------------------"<<endl<<endl;
    cout<<"Enter the number:";
    cin>>n;
    for(i=n-1;i>0;i--)
    {
       for(j=2;j<i;j++)
       {
           if(i%j==0)
           {flag++;
           }
       }
       if(flag==0)
       {
           if(i==1)
           {
               cout<<"No prime number before 2";
           }
           else
           {
               cout<<endl<<i<<" is the last prime number before "<<n;
           break;
           }
       }
       flag=0;
    }
    return 0;
}
