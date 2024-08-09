#include <iostream>
using namespace std;
int main()
{
    string us, pass;
    string username="aswin";
    string password="1234.";
    cout<<"Enter username:";
    cin>>us;
    cout<<"Enter password:";
    cin>>pass;
    if(us==username&&pass==password)
    {
        cout<<"Access granted!";
    }
    else
    {
        cout<<"Access denied!";
    }

    return 0;

}
