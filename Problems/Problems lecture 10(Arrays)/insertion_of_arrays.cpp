// Insertion between two arrays

#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 4, 2, 3};
    int arr2[4] = {1, 5, 2, 4};

    for (int i = 0; i < 5; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < 4; j++)
        {
            if (element == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = -12; // Updating array2 with any value
                break;
            }
        }
    }
}
