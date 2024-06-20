#include <iostream>
using namespace std;

int main()
{
    int length,width;
    cout<<"Enter the length of rectangle: ";
    cin>>length;
    cout<<"Enter the width of rectangle: ";
    cin>>width;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    return 0;
}