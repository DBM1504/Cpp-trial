/*#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<10;i++)
    {
        cout<<i<<endl;
    }
    return 0;
*/
#include <iostream>
using namespace std;
int main()
{
    int numbers=123456789;
    int entry;
    cout<<"NUMBERS BETWEEN 0 AND 10!"<<endl<<endl;
    for(int i=0;i>=0;i++)
    {
        cout<<"Enter numbers between 0 and 10:";
        cin>>entry;
        if(entry!=numbers)
        {
            cout<<"You lost, try again."<<endl;
            continue;
        }
        else
        {
            cout<<"You win!";
            break;
        }

    }
    return 0;
}

//scopes in loops;
#include<iostream>//#:
using namespace std;//std:library
int main()//main is a function
{
    int i;//global scope
    for(i=1;i<=10;i++)//for is a keyword in loop
    {
        cout<<i<<endl;//endl
    }
    cout<<"value of i is "<<i;//statement
    return 0;
}
