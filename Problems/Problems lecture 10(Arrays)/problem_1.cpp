// Find unique element from given array


#include<iostream>
using namespace std;

int main()
{
    int arr[7] ={1,2,4,3,1,2,3};

    int ans = 0;

    for(int i=0;i<7;i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<"Unique element is : "<<ans;

}
