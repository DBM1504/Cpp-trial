//create a program calculates shipping cost based on wt of a package and destination zone
#include<iostream>
using namespace std;
int main()
{
    float wt, place, cost;
    cout<<"Enter the weight of package :";
    cin>>wt;
    cout<<"Enter the distance in km:";
    cin>>place;
    cost=(wt*0.5)+(place*0.4);
    cout<<"Shipping cost:"<<cost;
    return 0;
}
