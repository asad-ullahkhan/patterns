#include <iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the length of first row: ";
    cin>>length;
    for (int i = 1; i <= length; i++)
    {
      for (int j = 1; j <= i; j++)
    {
      cout<<i;
       
    }
       cout<<endl;
    }
    

    return 0;
}