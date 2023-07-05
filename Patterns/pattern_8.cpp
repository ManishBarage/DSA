#include <iostream>
using namespace std;

// 1
// 2 3
// 3 4 5
// 4 5 6 7

int main()
{
    int n;
    cout << "Enter row : ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        int val = row;

        while (col <= row)
        {
            cout << " " << val;
            val = val + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
