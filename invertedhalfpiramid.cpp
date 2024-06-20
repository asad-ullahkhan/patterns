#include <iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the length of first row: ";
    cin>>length;
    for (int i = length; i >= 0; i--)
    {
      for (int i = length; i >= 0; i--)
    {
      cout<<"*";
       
    }
    length--;
       cout<<endl;
    }
    

    return 0;
}