#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    } 
    return 0;
}

int main()
{

    int arr[5] = {1, 4, 6, 3, 7};

    int key;
    cout << "Enter the element that you want to search: ";
    cin >> key;

    bool found = search(arr, 5, key);

    if (found)
    {
        cout << "The element is present";
    }
    else
    {
        cout << "Element is not present";
    }
}