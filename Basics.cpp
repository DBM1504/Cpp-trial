#include <iostream>
using namespace std;
int main()
{
    int a,b,sum,result;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum:";
    cin>>result;
    if(result==sum)
    {
        cout<<"correct.";
    }
    else
        {cout<<"wrong.";
    }
    return 0;
}
