//•	Write a program to print all even numbers between 1 to 100. – using while loop
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    while(i<100)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
    return 0;
}


//•	Write a program to print all odd number between 1 to 100.
#include <iostream>
using namespace std;
int main()
{
    int i;
    i=1;
    while(i<=100)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
    return 0;
}



//•	Write a program to find sum of all natural numbers between 1 to n.
#include <iostream>
using namespace std;
int main()
{
   int n,sum;
   cin>>n;
   sum=n*(n+1);
   cout<<"Sum of numbers from 1 to "<<n<<" is: "<<sum/2;
   return 0;
}


//•	Write a program to find first and last digit of a number.

#include <iostream>
using namespace std;
int main()
{
    int n, reversed,remainder,x;
    cout<<"Enter number:";
    cin>>n;
    x=n;
    while(x>=10)
    {
        x/=10;
    }
    cout<<endl<<"First digit= "<<x<<endl;
    cout<<"Last digit= "<<n%10<<endl;
    cout<<"Sum= "<<(n%10)+x;
    return 0;

}


//•	Write a program to print multiplication table of any number.
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The multiplication table of "<<n<<" is:"<<endl;
    for(i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
*/
