#include <iostream>
using namespace std;

//Changing character to lower case
char toLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLower(name[s]) != toLower(name[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }                                                  
    return 1;
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}
int main()
{
    char name[10];
    cout << "Enter your name : ";
    cin >> name;
    cout << "Given Name : " << name << endl;

    int len = getLength(name);

   // cout<<"Palindrome or not? : "<<palindrome(name,len);

    if (palindrome(name,len))
    {
        cout << "Its is palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
}
