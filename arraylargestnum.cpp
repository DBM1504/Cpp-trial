#include <iostream>
using namespace std;
int main()
{
    int num[100],n;
    cin>>n;
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }

    for(int j=1;j<=n;j++)
    {
        if(num[i]>num[j])
        {
            cout<<"Largest is "<<num[i];
        }
        else
        {
            cout<<"Largest is "<<num[j];
        }


    }

    return 0;

}

