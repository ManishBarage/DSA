#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2,1,4,6,3};
    int n=5;

    cout << "Original array : ";
    for (int i = 0; i <5; i++)
    {
        cout << arr[i] << " ";
    }


    for(int i = 1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--)
        {
            if(arr[j] > temp)
            {
                //Shifting to right

                arr[j+1] = arr[j];
            }
            else
            { 
                break;
            }
        }
        arr[j+1] = temp;
        
    }

    cout << endl
         << "Sorted array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;


}