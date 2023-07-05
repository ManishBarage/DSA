#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
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
    cout << "Original Name : " << name << endl;

    int len = getLength(name);
    reverse(name, len);

    cout << "String after reverse : " << name << endl;

    return 0;
}
