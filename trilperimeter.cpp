#include <iostream>
using namespace std;
float per(float l, float b)
{
    return 2*(l+b);
}
int main()
{
    int l,b,value, flag=0;

    while(flag==0)
    {
    switch(value)
    {
        case 0:cout<<"Thank you!";
        flag=1;
        break;

        default:cout<<"Enter the length and breadth: ";
        cin>>l>>b;
        cout<<"Perimeter is "<<per(l, b)<<" sq.cm"<<endl;
        cout<<"Do you want to continue calculating perimeter?"<<endl<<"(Enter any value to continue and 0 to exit): ";
        cin>>value;
    }
    }
    return 0;
}


