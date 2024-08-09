#include <iostream>
using namespace std;
int main()
{
    int result, marks[3];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the percentage of physics:";
        cin>>marks[0];
        cout<<"enter percentage of bio:";
        cin>>marks[1];
        cout<<"enter perecntage of chem:";
        cin>>marks[2];
    }
    for(int j=0; j<2;j++)
    {

        if(marks[j]>90)
        {
            result= "A"

        }
        else if(marks[j]>80)
        {
            result="B"

        }
        else if(marks[j]>70)
        {
            result="Grade c";
        }
        else if(marks[j]>60)
        {
            result="Grade D";

        }
        else if(marks[j]>50)
        {
            result="Grade E";
        }
        else
        {
            result="Failed";
        }
        cout<<"The grade for physics is"<<result
    }
    return 0;


}
