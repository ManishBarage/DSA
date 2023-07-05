// Finding insertion between arrays : both arrays are in non-decreasig order (increasing order)

#include <iostream>
using namespace std;

int main()
{    
    int arr1[4] = {1, 3, 4, 5};
    int arr2[3] = {3, 4, 5};

    int i = 0, j = 0;
    int ans = 0;

    while (i < 4 && j < 3)
    {
        if (arr1[i] == arr2[j])
        {
            // ans = arr1[i];
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
