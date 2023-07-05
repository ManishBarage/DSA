// Power of interger 2 Ex- i/p=16 o/p=true i/p=10 o/p = false i/p=8 o/p= true

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            cout << "True";
        }
    }
}
