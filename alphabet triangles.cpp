#include <iostream>
using namespace std;
int main()
{
    char alph= 'A';
    int i,j;
    for(i=0;i<=4;i++)
    {
        if(i<4)
        {
            for(j=1;j<=4-i;j++)
                {
                    cout<<" ";
                    }
          for(j=1;j<=9;j++)
          {
              if(j==5-i)
              {
                  cout<<(char)(alph);
              }
              else if(j==5+i&&j!=5)
              {
                  cout<<(char)(alph+2*i);
              }
            else
            {
                cout<<" ";
            }
          }
        }
        if(i==4)
        {
            for(j=1;j<=9;j++)
            {
                cout<<(char)(alph++);
            }
        }
                cout<<endl;
    }
    return 0;
}
