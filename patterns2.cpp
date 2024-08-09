/*#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//Number triangle
#include <iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cin>>r;
    c=2*r-1;
    for(i=2;i<=r+1;i++)
    {
        for(j=1;j<=r-i+1;j++)
        {
            cout<<"  ";
        }
       for(j=1;j<=c;j++)
       {
           if(j<=2*i-3)
           {
               cout<<j<<" ";
           }
           else
           {
               cout<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cin>>r;
    c=2*r-1;
    for(i=r+1;i>1;i--)
    {
        for(j=r+1;j>=i;j--)
        {
            cout<<"  ";
        }

      for(j=1;j<=c;j++)
        {
            if(j<=2*i-3)
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
//
*/
#include <iostream>
using namespace std;
int main()
{
   char alph;
    int i,j;
    for(i=0;i<5;i++)
    {
        alph='A'+i;
        for(j=0;j<=i;j++)
        {
            cout<<(char)(alph)<<" ";
        }
    cout<<endl;
    }
    return 0;
}

