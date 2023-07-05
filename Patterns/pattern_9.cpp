#include <iostream>
using namespace std;

// 1
// 2 1
// 3 2 1
// 4 3 2 1

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
            cout << " " << row - col + 1;
            val = val + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
