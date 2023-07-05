#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 1, 5, 7, 3};

    cout << "Original array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);

                        // OR

                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
            }
        }
    }
    cout << endl
         << "Sorted array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
