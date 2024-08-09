#include <iostream>
using namespace std;
int main()
{
int age;
cout<<"Enter age of the person to show category of citizenship:";
cin>>age;

if(age>=75)
{
    cout<<"Senior citizen.";
}
else if(age>=40)
{
cout<<"Middle aged.";
}
else if(age>=18)
    {
        cout<<"Youth.";
    }
    else
    {
        cout<<"Kid";
    }
return 0;
}
