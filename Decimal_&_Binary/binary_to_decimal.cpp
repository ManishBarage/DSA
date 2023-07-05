#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the binary number : ";
    cin>>n;

    int ans =0 , i=0;

    while(n!=0)
    {
        int digit = n%10;   // Getting last digit of binary number

        if(digit==1)
        {
            ans = ans + pow(2,i);  // Formula for finding the decimal 
        }

        n = n/10;           // Shifting right a given binary number
        i++;
    }
    cout<<"Decimal of given binary number is : "<<ans;
}