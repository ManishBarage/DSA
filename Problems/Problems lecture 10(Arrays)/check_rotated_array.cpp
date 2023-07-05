#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {4,5,1,2,3};
    int n =5;

    int count = 0;

    for(int i=1;i<n;i++)
    {
        if(arr[i-1] > arr[i])
        {
            count++;
        }
    }

    if(arr[n-1] > arr[0])
    {
        count++;
    }

    if(count<=1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"false";
    }
}
