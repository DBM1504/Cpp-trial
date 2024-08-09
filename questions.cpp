//Write a program in C++ to check whether a number is prime or not.
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=2;i>1;i++)
    {
        if(i!=n)
        {
            if(n%i==0)
                {
                    cout<<"The given number is not a prime number.";
                    break;
                    }
        }
           else if(i=n&&n%i==0)
            {
                cout<<"The given number is a prime number.";
            break;
            }
    }
    return 0;
    }

