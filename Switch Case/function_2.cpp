#include <iostream>
using namespace std;

bool even_odd(int num1)
{
    if (num1 % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}

int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;

    even_odd(a);
    return 0;
}