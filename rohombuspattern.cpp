#include <iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the length of rhombus: ";
    cin>>length;
    for (int i = 1; i < length; i++)
    {
        for (int j = length; j >= i; j--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= length; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    

    return 0;
}