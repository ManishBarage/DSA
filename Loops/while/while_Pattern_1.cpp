#include<iostream>
using namespace std;

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
            cout<<" * " ;
            j++;
        }
        cout<<endl;
        a++;
    }

}
