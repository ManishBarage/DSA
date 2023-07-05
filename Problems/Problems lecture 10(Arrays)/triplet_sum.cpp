#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        int j = i + 1;
        int k = 5 - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] == 12)
            {
                cout << arr[i] << arr[j] << arr[k];
            }
            j++;
        }
    }
}
