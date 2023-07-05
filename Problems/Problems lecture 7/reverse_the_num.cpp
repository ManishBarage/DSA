// Reverse the given number (if value go outside the 32 bit integer range[-2^31, 2^31-1] then return 0)

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int ans = 0;

    while (n != 0)
    {
        int digit = n % 10;

        if ((ans > INT_MAX / 10) || (ans < INT_MIN))
        {
            return 0;
        }

        ans = (ans * 10) + digit;
        n = n / 10;
    }

    cout << "Reverse of given number is : " << ans;
}