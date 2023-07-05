#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(2);
    s.push(3);
    cout << "element at top before pop : " << s.top() << endl;

    s.pop();

    cout << "element at top after pop : " << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Stack is not empty";
    }
    cout << endl
         << "Size of stack is : " << s.size() << endl;

    return 0;
}
