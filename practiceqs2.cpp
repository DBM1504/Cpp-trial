//•	Write a program to find the maximum between three numbers entered by the user.
/*#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"The highest number is "<<a;
        }
        else
        {
            cout<<"The highest number is "<<c;
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            cout<<"The highest number is "<<b;
        }
        else
        {
            cout<<"The highest number is "<<c;
        }
    }
    return 0;
}


//•	Write a program to check whether a number is divisible by 5 and 11 or not.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5==0)
    {
        cout<<"The number is divisible by 5.";
    }
    else if(n%11==0)
    {
        cout<<"The number is divisible by 11.";
    }
    else
    {
        cout<<"The number is not divisible by 5 or 11.";
    }
    return 0;
}



//•	Write a program to input any alphabet and check whether it is vowel or consonant.
#include <iostream>
using namespace std;
int main()
{
    char alph;
    cout<<"Enter an alphabet: ";
    cin>>alph;
    if(alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u')
    {
        cout<<"It is a vowel.";
    }
    else
    {
        cout<<"It is a consonant.";
    }
    return 0;
}
*/

//•	Write a program to input month number and print number of days in that month.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number of the month: ";
    cin>>num;

    if(num==2)
    {
        cout<<"Number of days in the month= 28.";
    }
    else if(num>=8&&num%2==0&&num<=12)
    {
        cout<<"Number of days in the month = 31.";
    }
    else if(num<8&&num%2!=0)
    {
        cout<<"Number of days in the month= 31.";
    }

    else
    {
        cout<<"Number of days in the month= 30.";
    }
    return 0;
}

/*

•	Write a program to input angles of a triangle and check whether triangle is valid or not.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three angles <a, <b and <c of the triangle: ";
    cin>>a>>b>>c;
    if(a+b+c==180)
    {
        cout<<"Valid. It is a triangle.";
    }
    else
    {
        cout<<"Invalid. Not a triangle.";
    }
    return 0;
}



//•	Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    sum=a+b+c;
    cout<<"Enter the values of length of sides of a triangle: ";
    cin>>a>>b>>c;
    if(a==b&&b==c)
        {
        cout<<"It is an equilateral triangle.";
        }
        else if(a==b||a==c||b==c)
            {
                cout<<"It is an isosceles triangle.";
        }
        else
        {
            cout<<"It is a scalene triangle.";
        }
        return 0;
}



•	Write a program to calculate profit or loss by collecting Cost Price and Selling Price from the user
#include<iostream>
using namespace std;
int main()
{
    int cp, sp;
    cout<<"Enter the cost price: "<<endl;
    cin>>cp;
    cout<<"Enter the selling price:"<<endl;
    cin>>sp;
    if(cp>sp)
    {
        cout<<"Loss= "<<cp-sp<<endl;
    }
    else if(sp>cp)
    {
        cout<<"Profit= "<<sp-cp<<endl;
    }
    else
    {
        cout<<"Cost price = Selling price";
    }
    return 0;
}



•	Write a program to input basic salary of an employee and calculate its Gross salary according to following:
•
•	    Basic Salary <= 10000 : HRA = 20%, DA = 80%
•	    Basic Salary <= 20000 : HRA = 25%, DA = 90%
•	    Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <iostream>
using namespace std;
int main()
{
    float gross, bs,hra,da;
    cout<<"Enter basic salary: "<<endl;
    cin>>bs;
    if(bs<=20000)
    {
        gross=(0.25*bs)+(0.9*bs)+bs;
        cout<<"Gross salary = "<<gross<<endl;
    }
    else if(bs<=10000)
    {
        gross=(0.2*bs)+(0.8*bs)+bs;
        cout<<"Gross salary= "<<gross<<endl;
    }
    else if(bs>20000)
    {
        gross=(0.3*bs)+(0.95)+bs;
        cout<<"Gross salary= "<<gross<<endl;
    }
    return 0;
}


//•	Write a program to input electricity unit charges and calculate total electricity bill according to the given condition:
•
•	    For first 50 units Rs. 0.50/unit
•	    For next 100 units Rs. 0.75/unit
•	    For next 100 units Rs. 1.20/unit
•	    For unit above 250 Rs. 1.50/unit
•	    An additional surcharge of 20% is added to the bill
•

#include <iostream>
using namespace std;
int main()
{
    int unit, bill, rup, ext;
    cout<<"Electricity units used:";
    cin>>unit;
    if(unit<=50)
    {
        rup=0.5*unit;
        cout<<"Bill: Rs. "<<rup+(0.2*rup);
    }
    else if(unit<=150)
    {
        ext=unit-50;
        rup=(ext*0.75)+25;
        cout<<"Bill: Rs. "<<rup+(0.2*rup);
    }
    else if(unit<=250)
    {
        ext=unit-150;
        rup=(ext*1.2)+100;
        cout<<"Bill: Rs. "<<rup+(0.2*rup);
    }
    else
    {
        rup=unit*1.5;
        cout<<"Bill: Rs. "<<rup+(0.2*rup);
    }
    return 0;

}



//•	Write a program to print all natural numbers from 1 to n. – using while loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    cout<<endl<<endl<<endl;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    return 0;
}



//•	Write a program to print all natural numbers in reverse (from n to 1). – using while loop

#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    cout<<endl<<endl;
    i=n;
    while(i>=1)
    {
        cout<<i<<endl;
        i--;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    char i;
    i='A';
    while(i<='Z')
    {
        cout<<i<<endl;
        i++;
    }
    return 0;
}
*/
