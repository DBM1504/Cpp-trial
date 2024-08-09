#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string reversed;
    string name="Devika";
    name=reversed;
    reverse(name.begin(),name.end());
    if(name==reversed)
    {
        cout<<"It is a palindrome.";
    }
    else
    {
        cout<<"Not a palindrome.";
    }
    return 0;
}
