#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << endl
         << "Printing the array : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Printing Done";
}

int main()
{
    int num[5] = {1, 2, 3, 4, 5};

    printArray(num, 5);

    // Finding the size of array

    int arrSize = sizeof(num) / sizeof(int); // Size of integer is 4byte
    cout << endl
         << "Size of array is : " << arrSize;

    return 0;
}
