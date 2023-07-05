#include<iostream>
using namespace std;

    // A
    // B C
    // D E F

int main()
{
     int n;
    cout << "Enter row : ";
    cin >> n;

    int row=1;
    char ch ='A';

    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<" "<<ch;
            ch = ch+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    

}