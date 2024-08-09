//Q.3
#include <iostream>
using namespace std;
int main()
{
    int bal,n,x,flag=0;
    bal=10000;
    while(flag==0)
    {
        cout<<endl<<"Press 1 to withdraw money."<<endl<<"Press 2 to check your balance."<<endl<<"Press 3 to deposit money."<<endl<<"Press 0 to close."<<endl;
        cin>>n;

    if(n==1)
    {
        cout<<endl<<"Withdraw:"<<endl<<"Enter amount. Rs. ";
        cin>>x;
        bal=bal-x;
        cout<<endl<<"Your available balance is: "<<bal<<endl;
    }
    else if(n==2)
    {
        cout<<endl<<"Available balance:"<<endl<<"Rs. "<<bal<<endl;
    }
    else if(n==3)
    {
        cout<<endl<<"Deposit:"<<endl<<"Enter amount. Rs.";
        cin>>x;
        bal=bal+x;
        cout<<endl<<"Your available balance is Rs. "<<bal<<endl;
    }
    else if(n==0)
    {
        cout<<"Thank you!";
        flag=1;
    }
    else
    {
        cout<<"Invalid.";

    }
    }
    return 0;
}
