
// Count total number of 1 bits in given number

#include<iostream>
using namespace std;
int main()
{
    int num = 00000000010111;
    int count =0;

    while(num !=0)
    {
        //Checking last bit
        if(num&1)
        {
            count++;
        }
        num = num>>1;
    }

    cout<<count;
}