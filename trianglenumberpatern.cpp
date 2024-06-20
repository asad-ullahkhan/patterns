#include <iostream>
using namespace std;

int main()
{
    int base;
    cout<<"Enter the length of base of triangle: ";
    cin>>base;
    for (int i = 1; i <= base; i++)
    {
        for (int j = 1; j <= base-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        for (int j = 1; j <= base; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}