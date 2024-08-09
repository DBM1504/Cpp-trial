#include<iostream>
using namespace std;
int main()
{
    int gue,flag=0;
    cout<<"Guess a number:";
    cin>>gue;
    while(flag==0)//when the value of flag is not equal to 0, it breaks
    {
        switch(gue)
        {
            case 6:cout<<"Hurray!";
            flag=1;//assigning 1 , changing the value of already existing variable flag.
            break;
            default:cout<<"Try again:";
            cin>>gue;
        }
    }
    return 0;

}
