#include<iostream>
using namespace std;

int main()
{
    int arr[5] ={1,0,3,6,0};

    cout<<"Array before moving zeros : ";
    for(int i =0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int nonZero=0;

    for(int j=0;j<5;j++)
    {
        if(arr[j] !=0)
        {
            swap(arr[j] , arr[nonZero]);
            nonZero++;
        }
    }

    cout<<"Array after moving zeros : ";
    for(int i =0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;


}
