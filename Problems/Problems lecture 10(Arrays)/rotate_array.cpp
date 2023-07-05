#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr, int k)
{
    vector<int> temp(5);
    for (int i = 0; i < arr.size(); i++)
    {
        temp[(i + k) % arr.size()] = arr[i];
    }
    arr = temp;
}
int main()
{

    vector<int> vec;
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    int n = vec.size();
    int k = 2;

    cout << "Array before rotation : ";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    rotate(vec, 2);

    cout << "Array after rotation : ";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
