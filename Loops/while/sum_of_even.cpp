#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int sum = 0;
    int a = 2;

    while(a<=n)
    {
        sum = sum+a;
        cout<<a<<" ";
        a = a+2;


    }

    cout<<"\n Sum : "<<sum ;
}
