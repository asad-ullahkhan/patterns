#include <iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the length of butterfly: ";
    cin>>length;
    int n=length*2;
    signed int space;
    //for upper part of butterfly
    for (int i = 1; i <= n; i++)
   {
   if (i<=length)
 {
   for (int j = 1; j <= i; j++)
    {
        cout<<"*";
    }
        space=n-(2*i);
    for (int k = 1; k <= space; k++)
    {
        cout<<" ";
    }
    for (int j = 1; j <= i; j++)
    {
        cout<<"*";
    } 
 }
   //for lower part of butterfly
 
    if (i>length)
    {
    for (int j = n; j >= i; j--)
     {
        cout<<"*";
     }
     space=((2*i)-2)-n;                  
     for (int k = 1; k <= space; k++)
     {
        cout<<" ";
     }
     for (int j = n; j >= i; j--)
     {
        cout<<"*";
     }
    }
     cout<<endl; 
    }

    return 0;
}