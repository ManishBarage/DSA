#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any single character : ";
    cin>>ch;

    if (ch>=52 && ch<=90)
    {
        cout<<"The character is in UpperCase";
    }
    else if (ch>=97 && ch<=122)
    {
        cout<<"The character is in LowerCase";
    }
    else if (ch>=48 && ch<=57)
    {
        cout<<"The character is numeruc value";
    }
    else
    {
        cout<<"The character is special symbol";
    }
    
}