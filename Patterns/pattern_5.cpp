#include<iostream>
using namespace std;


/*
    1 2 3
    4 5 6
    7 8 9
*/

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    int a=1;
    int count=1;

    while (a<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout<<" "<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        a = a+1;

    }

}
