#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;

    for(int i=start+1; i<=end;i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i=start;
    int j = end;

    while(i < pivotIndex && j>pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i], arr[j]);\
            i++;
            j--;
        }
    }

    return pivotIndex;

}
void quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int pi = partition(arr, start, end);
        quickSort(arr, start, pi-1);
        quickSort(arr,pi+1,end);
    }
}

int main()
{
    int arr[6] = {2,1,5,7,9,4};
    int n = 6;


    quickSort(arr, 0, 5);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
