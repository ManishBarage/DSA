// Finding first and last occurrence index  of element

#include <iostream>
using namespace std;

int firstOccur(int arr[], int size, int key)
{ 
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccur(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 4, 6};
    int fisrt = firstOccur(arr, 7, 3);
    int last = lastOccur(arr, 7, 3);
    cout << "First occurrence of 3 is at index : " << fisrt << endl;
    cout << "Last occurrence of 3 is at index : " << last << endl;

    int total = (last - fisrt) + 1;

    cout << "Total number of occurance is : " << total;

    return 0;
}
