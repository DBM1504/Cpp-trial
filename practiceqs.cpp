/*•	Write a program to calculate the Simple Interest by collecting the Principal Amount,
No of Years and Rate of Interest from the user.
Please use the following formula. Simple Interest=(Principal*No of Years*Rate of Interest/100)*/
/*#include <iostream>
using namespace std;
int main()
{
    float si, princ, years, rate;
    cout<<"Enter the principal amount: ";
    cin>>princ;
    cout<<"Enter the number of years: ";
    cin>>years;
    cout<<"Enter the rate of interest: ";
    cin>>rate;
    si=(princ*years*rate/100);
    cout<<"Simple interest: "<<si;
    return 0;
}
*/


//•	Write a program that asks the user for an integer, increments it by 1, and prints the result.
/*#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cout<<"Enter a number: ";
    cin>>n;
    s=n+1;
    cout<<n<<"+1 = "<<s;
    return 0;

}
*/
//•	Write a program that asks the user for two integers, swaps their values using a third variable, and prints the swapped values.
/*#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;
    cout<<"First number: "<<a<<" and second number: "<<b;
    c=a;
    cout<<endl<<"Swapping, first num: "<<b<<" and second num: "<<c;
    return 0;
}
*/



//	Write a program that asks the user for two integers, swaps their values without using a third variable, and prints the swapped values.
/*#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"First number: "<<a<<", Second number: "<<b<<endl<<endl;
    cout<<"Swapping the numbers."<<endl<<endl<<"First number: "<<b<<", Second number: "<<a;
    return 0;
}
*/


//•	Write a program that defines a constant integer with a value of 100 and prints it.

/*#include<iostream>
using namespace std;
int main()
{
    const int i=100;
    cout<<"Constant= "<<i;
    return 0;
}
//•	Write a program that asks the user for an integer, multiplies it by 5, adds 10, and then prints the result.
#include <iostream>
using namespace std;
int main()
{
    int i,result;
    cout<<"Enter an integer: ";
    cin>>i;
    result=(i*5)+10;
    cout<<"Result= "<<result;
    return 0;
}

//•	Write a program that asks the user for three integers in a single line and then prints them.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}




//•	Write a program that asks the user for two integers and then prints the remainder when the first integer is divided by the second integer.
#include <iostream>
using namespace std;
int main()
{
    int a,b,rem;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    rem=a%b;
    cout<<"The remainder when "<<a<<" is divided by "<<b<<" = "<<rem;
    return 0;
}


//•	Write a C program to find the maximum between two numbers entered by the user.
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"The maximum between the two numbers is: ";
    if(a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
    return 0;
}


//•	Write a C program to check whether a number is negative, positive or zero.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0)
    {
        cout<<"Positive.";
    }
    else if(n<0)
    {
        cout<<"Negative.";
    }
    else
    {
        cout<<"Zero.";
    }
    return 0;
}





//•	Write a C program to check whether a number is even or odd.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<"Even number.";
    }
    else
    {
        cout<<"Odd number.";
    }
    return 0;
}



//•	Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
//Calculate percentage and grade according to following:
/*Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage < 40% : Grade F


#include <iostream>
using namespace std;
int main()
{
    int p,c,b,m,co,per,total,sum,tot;
    cout<<"Enter marks of each subject: ";
    cin>>p>>c>>b>>m>>co;
    cout<<"Enter total marks: ";
    cin>>total;
    sum=(p+c+b+m+co)*100;
    tot=total*5;
    per=(sum/tot);
    cout<<"Percentage: "<<per<<endl;
    cout<<"Your grade is as follows:"<<endl;
    if(per>=90)
    {
        cout<<"Grade A.";
    }
    else if(per>=80)
    {
        cout<<"Grade B.";
    }
    else if(per>=70)
    {
        cout<<"Grade C.";
    }
    else if(per>=60)
    {
        cout<<"Grade D.";
    }
    else if(per>=50)
    {
        cout<<"Grade E.";
    }
    else if(per<50)
    {
        cout<<"Grade F.";
    }
    return 0;
}
*/






