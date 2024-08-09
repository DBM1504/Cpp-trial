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
            cout<<(char)(al)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
