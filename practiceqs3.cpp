/*//•	Write a program to print all alphabets from a to z. – using while loop
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char al;
    al='A';
    int i=1;
    while(i<=26);
    {
        cout<<(char)(al)<<" ";
        i++;
    }
    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    char al='A';
    cin>>rows;
    for(int i=0;i<=rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<(char)(al++)<<" ";
        }
        cout<<endl;
    }
    return 0;
}


