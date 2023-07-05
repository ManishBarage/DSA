#include<iostream>
using namespace std;

//  1 1 1 1
//  2 2 2 2
//  3 3 3 3
//  4 4 4 4

int main()
{
    int n ;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int a =1;

    while (a<=n)
    {
        int j = 1;
        while(j<=n)
        { 
            cout<<a;
            j++;
        }
        cout<<endl;
        a++;
    }

}
