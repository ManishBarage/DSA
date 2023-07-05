#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);

        start = start + 1;
        end = end - 1;
    }
}

void printArray(int arr[], int n)
{
    cout << "Reversed Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[5] = {3, 4, 2, 7, 1};
    cout << "Given array is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, 5);

    printArray(arr, 5);

    return 0;
}
