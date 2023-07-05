#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    //size for temprory arrays
    int n1 = mid - start + 1;
    int n2 = end - mid;

    //Creating temprory arrays
    int *a = new int[n1];
    int *b = new int[n2];

    //Assigning values to tempraroy arrays
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[start + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    //Comparing arrays for Merging
    int i = 0;
    int j = 0;
    int k = start;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    //when elements are remaining in arr1
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    //when elements are remaining in arr2
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    //Dividing arrays into subarrays
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}
int main()
{
    int arr[7] = {9, 7, 6, 8, 3, 4, 2};
    int n = 7;

    mergeSort(arr, 0, 6);

    cout << "Array after sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
