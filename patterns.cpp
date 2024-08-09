//Square pattern
/*
#include <iostream>
using namespace std;
int main()

{
    int row, clm;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter columns: ";
    cin>>clm;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=clm;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}

//Hollow square
#include <iostream>
using namespace std;
int main()
{
    int rows,colm;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<endl<<"Enter columns: ";
    cin>>colm;
    char space=' ';
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=colm;j++)
        {
            if(i==1 || i==rows || j==1 || j==colm)
            {
                cout<<"* ";
                }
                else
                {
                    cout<<space<<space;
                }

    }
    cout<<endl;
    }

    return 0;
}


//Left triangle
#include <iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter rows: ";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

*/
//hollow triangle
#include <iostream>
using namespace std;
int main()
{
    int c,r,i,j;
    cout<<"rows:";
    cin>>r;
    c=(2*r)-1;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        if(i==1)
        {
            cout<<"*";
        }
        else if(i==r)
        {
            for(j=1;j<=c;j++)
            {
                cout<<"*";
            }
        }
        else
            {
                cout<<"*";
                for(j=1;j<=2*i-3;j++)
                {
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<endl;

    }
    return 0;
}

/*
#include <iostream>
using namespace std;
int main()
{
    int c,r,i,j;
    cout<<"Enter rows: ";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}


//diamond pattern
#include<iostream>
using namespace std;
int main()
{
    int r,row;
    cout<<"Mid point: ";
    cin>>r;
    row=2*r-1;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<" *";

        }
        cout<<endl;
    }
    for(int i=1;i<=r-1; i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=r-1;j>=i;j--)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
    }
/*

#include <iostream>
using namespace std;
int main()
{

}




#include <iostream>
using namespace std;
int main()
{
    int c,r,i,j;
    cout<<"Enter rows: ";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=r;k>=1;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int r,c,i,j,k;
    cout<<"Enter rows: ";
    cin>>r;
    c=2*r-1;
    for(i=1;i<=r;i++)
    {
        k=1;
        for(j=1;j<=c;j++)
        {
            if(j>=i&&j<=c&&k)
            {
                cout<<"*";
                k=0;
            }
            else
            {
                cout<<" ";
                k=1;
            }

        }

        cout<<endl;
    }
    return 0;
}

//Triangle with spaces.
#include <iostream>
using namespace std;
int main()
{
    int c,r,i,j;
    cout<<"Enter rows: ";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

/*
//Cross pattern

#include <iostream>
using namespace std;
int main()
{
    int r,x,mid;
    cout<<"Enter the number of rows: ";
    cin>>r;
    if(r%2==0)
    {
        cout<<"Invalid.";
    }
    x=r+1;
    mid=(r+1)/2;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r;j++)
        {
            if(i<=mid)
            {
                if(i==j)
                {
                    cout<<"*";
                }
                else if(j>=i&&j==x-i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else if(i>mid)
            {
                if(i==j||j==x-i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}


//Right side triangle
#include <iostream>
using namespace std;
int main()
{
    int i,j,r;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=r-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


//Left down triangle
#include <iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"Enter rows: ";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=r;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


//right down triangle
#include <iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"Enter rows:";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=r;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}


//Reverse triangle
#include <iostream>
using namespace std;
int main()
{
    int i,j,r;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=r;j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}


//Hollow diamond
#include<iostream>
using namespace std;
int main()
{
    int i,j,r,half;
    cout<<"Enter rows:";
    cin>>r;
    half=(r+1)/2;
    for(i=1;i<=half;i++)
    {
        for(j=1;j<=half-i;j++)
        {
            cout<<" ";
        }
        if(i==1)
        {
            cout<<"*";
        }
        else
        {
            cout<<"*";
            for(j=1;j<=2*i-3;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=half+1;i<=r;i++)
    {
        for(j=1;j<=i-half;j++)
        {
            cout<<" ";
        }
        if(i==r)
        {
            cout<<"*";
        }

        else
        {
            cout<<"*";

            for(j=1;j<=2*(r-i)-3;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }


        cout<<endl;
    }
        return 0;
}
//wrong


//hollow diamond
#include<iostream>
using namespace std;
int main()
{
    int r,i,j,k,half;
    cout<<"Enter rows:";
    cin>>r;
    half=2*r-1;
    for(i=1;i<=half;i++)
    {
        for(j=i;j<r;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=r;k++)
        {
            if(k==1||k==2*i-1)
            {
                cout<<"*";
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


#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int r,mid,i,j,x,y,z;
    cout<<"Enter rows:";
    cin>>r;
    if(r%2==0)
    {
        r++;
    }
    mid=(r+1)/2;
    cout<<"Mid point = "<<mid<<endl;
    x=mid+1;
    y=mid-1;
    for(i=1;i<=r;i++)
    {
        if(i<=mid)
        {
            for(j=1;j<=r;j++)
            {
                if(j==x-i||j==y+i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        else if(i>mid)
        {
            for(j=1;j<=r;j++)
            {
                if(j==i-y||j==r+mid-i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
//Hourglass pattern
#include <iostream>
using namespace std;
int main()
{
    int i,j,r,mid;
    cout<<"Enter rows: ";
    cin>>r;
    if(r%2==0)
    {
        r++;
    }
    mid=(r+1)/2;
    for(i=mid;i>=1;i--)
    {

            for(j=1;j<=mid+1-i;j++)
            {
                cout<<" ";
            }
            for(j=1;j<=2*i-1;j++)
            {
                cout<<"*";
            }
            cout<<endl;
    }
       for(i=2;i<=mid;i++)
        {
            for(j=i;j<=mid;j++)
            {
                cout<<" ";
            }
            for(j=1;j<=2*i-1;j++)
            {
                cout<<"*";

            }
            cout<<endl;
        }
        return 0;
    }
/*

//Butterflyt(wrong)
#include<iostream>
using namespace std;
int main()
{
    int i,j,r,m;
    cout<<"Enter rows: ";
    cin>>r;
    if(r%2==0)
    {
        r++;
    }
    m=(r+1)/2;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            for(j=m;j>2*i-3;j--)
            {
                cout<<" ";
            }
            if(i<m){
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            }
            else if(i==m)
            {
                for(j=1;j<m;j++)
                {
                    cout<<"*";
                }
            }
            cout<<endl;
        }

    for(i=m-1;i>=1;i--)
        {
            for(j=1;j<=i;j++)
                {
                    cout<<"*";
                    }
                    if(i==m-1)
                    {
                        continue;
                        4
                        +4
                    }
                    else
                    {

                    for(j=1;j<=2*(i+2-m)-3;j++)
                    {
                        cout<<" ";
                    }
                    }
                    for(j=i;j>=1;j--)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
                    }
    return 0;
}
//Butterfly

#include <iostream>
using namespace std;
int main()
{
    int i,j,r,m;
    cout<<"Enter rows: ";
    cin>>r;
    m=(r+1)/2;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(i<=m){
            if(j<=i||j>=(2*m)-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            }
            else
            {
                if(j<=(2*m)-i||j>=i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}


//Heart
#include <iostream>
using namespace std;
int main()
{
    int r,mid,m,i,j,c;
    cout<<"Enter middle of heart: ";
    cin>>mid;
    if(mid%2==0){
    m=mid/2;
    }
    else{
        m=(mid+1)/2;
    }
    r=mid-1;
    c=mid+r;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j>=m-i&&j<=m+i)
               {
                   cout<<"*";
               }
               else if(j>=m+10-i&&j<=m+10+i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
        }
        cout<<endl;
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j>=i+1&&j<=c-i)
            {
                cout<<"*";
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


//plus
#include <iostream>
using namespace std;
int main()
{
    int i,j,r,m;
    cout<<"Enter rows:";
    cin>>r;
    if(r%2==0)
    {
        r++;
    }
    m=(r+1)/2;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(i==m)
            {
                cout<<"*";
            }
            else if(j==m)
            {
                cout<<"*"<<endl;
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
*/
//
