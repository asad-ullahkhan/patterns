#include <iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the length of piramid: ";
    cin>>length;
    int x=1;
    for (int i = length; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    

    return 0;
}