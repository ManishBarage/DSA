#include<iostream>
using namespace std;

    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1


int main()
{
    int n;
    cout << "Enter row : ";
    cin >> n;

    int row=1;

    while(row<=n)
    {
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space = space-1;
        }

        int col=1;
        while (col<=row)
        {
            cout<<col;
            col=col+1;
        }

        int start = row-1;
        while (start)
        {
            cout<<start;
            start=start-1;

        }
        cout<<endl;
        row=row+1;
        

        
    }
}

