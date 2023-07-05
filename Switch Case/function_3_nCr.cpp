/* nCr formula : facto(n)
                ---------------------
                facto(r) * facto(n-r)
*/

#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int nume = factorial(n);
    int denom = factorial(r)*factorial(n-r);

    int ans = nume/denom;

    cout<<"nCr of given number is : "<<ans;

}

int main()
{

    int n , r;

    cout<<"Enter the numbers : ";
    cin>>n>>r;

    nCr(n,r);

    return 0;
}