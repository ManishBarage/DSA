#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int *a = new int[n1];
    int *b = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[start + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

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

    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int start, int end)
{
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
    int arr[7] = {1, 5, 2, 9, 6, 8, 3};
    int n = 7;


    cout << "Array before Sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr, 0, 6);

    cout << "Array after Sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
