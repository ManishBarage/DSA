// Find duplicate element from array

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 4, 2, 3, 4};

    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < 5; i++)
    {
        ans = ans ^ i;
    }

    cout << "Duplicte Element is : " << ans;
}
