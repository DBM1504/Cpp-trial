#include <iostream>
using namespace std;
int main()
{
    string subjects[3]={"physics","chemistry","biology"};
    int marks[3];
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"Enter "<<subjects[i]<<" marks: ";
    cin>>marks[i];

        if(marks[i]>=90&&marks[i]<=100)
        {
            cout<<"Grade A"<<endl;

        }
        else if(marks[i]>=80)
        {
            cout<<"Grade B"<<endl;
        }
        else if(marks[i]>=70)
        {
            cout<<"Grade C"<<endl;
        }
        else if(marks[i]>=60)
        {
            cout<<"Grade D"<<endl;
        }
        else if(marks[i]>=50)
        {
            cout<<"Grade E"<<endl;
        }
        else
        {
            cout<<"Failed."<<endl;
        }

    }
    return 0;



}
