#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a =2;

    while (a<n)
    {
        if(n%a==0)
        {
            cout<<"Not a Prime number \n";

        }
        else{
            cout<<"Prime Number ";
        }
        a++;
    }

}
