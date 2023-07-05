#include <iostream>
using namespace std;

char getMaxOccurChar(string str)
{
    //create an array of count of characters
    int arr[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // finding maximum occur character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}

int main()
{
    string str;
    cin >> str;

    cout << getMaxOccurChar(str);

    return 0;
}
