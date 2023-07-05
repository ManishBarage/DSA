#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i!=0)
        {
           
            return 1;
        }
        else
        {
            
            return 0;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    isPrime(n);

    if(isPrime(n))
    {
        cout<<"Given number is Prime";
    }
    else
    {
        cout<<"Given number is not Prime";
    }
    return 0;
}
