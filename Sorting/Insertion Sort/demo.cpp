#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {6,3,9,1,7,4};
    int n = 6;

    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    cout<<"Array after sort : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}



