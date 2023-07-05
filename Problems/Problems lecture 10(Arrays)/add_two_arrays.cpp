#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> vec)
{
    int s = 0;
    int e = vec.size() - 1;

    while (s < e)
    {
        swap(vec[s], vec[e]);
        s++;
        e--;
    }

    return vec;
}

int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[2] = {5, 6};

    int i = 3;
    int j = 1;
    int carry = 0;

    vector<int> ans;

    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        int addition = sum % 10;

        ans.push_back(addition);

        i--;
        j--;
    }

    while (i >= 0)
    {
        int value = arr1[i] + carry;
        carry = value / 10;
        int addition = value % 10;

        ans.push_back(addition);
        i--;
    }

    while (j >= 0)
    {
        int value = arr2[j] + carry;
        carry = value / 10;
        int addition = value % 10;

        ans.push_back(addition);
        j--;
    }

    while (carry != 0)
    {
        int value = carry;
        carry = value / 10;
        int addition = value % 10;

        ans.push_back(addition);
    }

    reverse(ans);

    // return 0;
}
