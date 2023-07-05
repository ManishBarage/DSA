#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;                  // Finding the last bit
        ans = (bit * pow(10, i) + ans);  //Reversing the binary number

        n = n >> 1;                      // Right shifting the last bit

        i++;
    }

    cout << "Binary of given number is : " << ans;
}