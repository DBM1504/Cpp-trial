#include <iostream>
using namespace std;
int main()
{
    char grade[6]={'A','B','C','D','E','F'};
    int mark, marks[6]={90,80,70,60,50,40};
    string sub[3]={"Physics","Chemistry","Biology"}, name[100];
    int i,j,k,n;
    for(k=0;k<=100;k++)
    {
        n=1;
        cout<<"Name of student: ";
        cin>>name[k];
        for(i=0;i<3;i++)
    {
        cout<<"Enter marks of "<<sub[i]<<" :";
        cin>>mark;
        for(j=0;j<6;j++)
            {
                if(mark>=marks[j])
                {
                    cout<<"Grade: "<<grade[j]<<endl;
                break;
                }
            }
            cout<<endl;
    }
    cout<<"Press 0 to close, any other value to continue.";
    cin>>n;
    if(n==0)
    {
        n=0;
    }
    cout<<endl;
    }
    return 0;
}
