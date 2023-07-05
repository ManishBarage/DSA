#include <iostream>
using namespace std;

int getMin(int num[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
int getMax(int num[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int num[50];
    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum Value in given array is : " << getMax(num, size) << endl;
    cout << "Minimum Value in given array is : " << getMin(num, size) << endl;
}
