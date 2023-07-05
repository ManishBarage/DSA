#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];

    // Finding numbers less than pivot
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // Place pivot at correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Managing left and right part of pivot for sorting
    int i = start;
    int j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        // Left part
        while (arr[i] <= pivot)
        {
            i++;
        }

        // Right part
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pi = partition(arr, start, end); // Getting position of pivot number
        quickSort(arr, start, pi - 1);        // Applying quick sort in left part of pivot
        quickSort(arr, pi + 1, end);       // Applying quick sort in right part of pivot
    }
}

int main()
{

    int arr[8] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = 8;

    cout<<"Original Array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, 7);

    cout<<"Array After Quick Sort:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
