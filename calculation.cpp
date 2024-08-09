#include <iostream>
using namespace std;
int main()
{
    float a,b,result;
    char oper;
    cout<<"Please enter the two numbers:";
    cin>>a>>b;
    cout<<"Please enter the operator:";
    cin>>oper;
    switch(oper)
    {
        case'+':
        result=a+b;
        cout<<"Sum of the two numbers is "<<result;
        break;

        case'-':
        result=a-b;
        cout<<"The difference between the numbers is ";
        break;

        case'*':
        result=a*b;
        cout<<"The product of the numbers is "<<a*b;
        break;

        case'/':
        result=a/b;
        cout<<"The result of division of the numbers is ";
        break;

        default:
            cout<<"The program does not support this operator.";

    }
    return 0;
}
