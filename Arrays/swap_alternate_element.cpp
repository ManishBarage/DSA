#include <iostream>
using namespace std;

void alterSwap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);

            // int temp = arr[1];
            // arr[1]=arr[0];
            // arr[0]=temp;
        }
    }
}

void printArray(int arr[], int n)
{
    cout << "New Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Given array is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    alterSwap(arr, 5);
    printArray(arr, 5);

    return 0;
}
