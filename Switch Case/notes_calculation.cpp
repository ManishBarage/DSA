
//Counting total number of notes required

#include<iostream>
using namespace std;

int main()
{
    int amt;

    cout<<"Enter the amount : ";
    cin>>amt;

    int Rs100,Rs50,Rs20,Rs1,rem;

    switch (1)
    {
        case 1:
                Rs100 = amt/100;
                rem = amt%100;
                cout<<"Number of 100Rs Notes required are : "<<Rs100<<endl;

                Rs50 = rem/50;
                rem = rem%50;
                cout<<"Number of 50 Rs Notes required are : "<<Rs50<<endl;

                Rs20 = rem/20;
                rem = rem%20;
                cout<<"Number of 20 Rs Notes required are : "<<Rs20<<endl;

                Rs1 = rem/1;
                rem = rem%1;
                cout<<"Number of 1 Rs Notes required are : "<<Rs1<<endl;

        default:
        break;

        
   

    }
}
