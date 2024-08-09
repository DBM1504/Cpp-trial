#include <iostream>
using namespace std;
int main()
{
    int marks[5];
    int maxscore=80;
    for(int i=0;i<5;i++)
    {
        cout<<"Please enter the mark of student "<<i+1<<":";
        cin>>marks[i];

    }
    for(int j=0;j<5;j++)
    {
        double percentage=(marks[j]/static_cast<double>(maxscore))*100;

        cout<<"The marks of student "<<j+1<<" is "<<marks[j]<<", Percentage:"<<percentage<<endl;//doubt
    }
    return 0;
}
