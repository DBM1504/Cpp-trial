#include <iostream>
using namespace std;
int main()
{
    string alph;
    cout<<"Enter the first two letter of the day:";
    cin>>alph;
    switch (alph)
    {
        case 'mo': cout<<"Monday";
        break;
        case 'tu': cout<<"Tuesday";
        break;
        case 'we': cout<<"Wednesday";
        break;
        case 'th': cout<<"Thursday";
        break;
        case 'fr': cout<<"Friday";
        break;
        case 'sa': cout<<"Saturday";
        break;
        case 'su': cout<<"Sunday";
        break;
        default: cout<<"Invalid";
    }
    return 0;
}
