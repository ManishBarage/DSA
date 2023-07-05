#include <iostream>
using namespace std;

int main()
{

    int n = 1;

    switch (n)
    {
    case 1:
        cout << "First";
        break;
    case 2:
        cout << "Second";
        break;

    default:
        cout << "Default case";
        break;
    }
    return 0;
}