#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter three numbers:";
    cin>>a>>b>>c;
    if(a>b)
        {
            if(a>c)
            {
                cout<<"Greatest number is "<<a;
            }
            if(c>a)
            {
                cout<<"Greatest number is "<<c;
            }
        }
        else
        {
            if(b>c)
            {
                cout<<"Greatest number is "<<b;
            }
            if(c>b)
            {
                cout<<"Greatest number is "<<c;
            }
        }
    return 0;
    }
