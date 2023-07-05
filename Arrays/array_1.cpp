#include <iostream>
using namespace std;

int main()
{
    int arr[3]{12, 21, 45};

    cout << "Value at 0 index is : " << arr[0]<<endl;

    // Printing the array
    cout<<"Given array is: ";
    int n =3;
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
