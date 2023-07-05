#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 1, 4, 32, 6, 8};


    cout << "Original array : ";
    for (int i = 0; i <6; i++)
    {
        cout << arr[i] << " ";
    }

    bool swapped = false;

    // For Round 1 to n-1
    for (int i = 1; i < 6; i++)
    {
        // Process element till n-i th index

        for (int j = 0; j < 6 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                s wap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // Already sorted
        if(swapped == false)
        {
            break;
        }
    }

    cout << endl
         << "Sorted array : ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
