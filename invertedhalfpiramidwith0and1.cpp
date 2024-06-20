#include <iostream>
using namespace std;

int main()
{
    int length;
    cout<<"enter the length of row: ";
    cin>>length;
    bool flag=1;
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<flag<<" ";
            flag=!flag;
        }
        cout<<endl;
    }
    

    return 0;
}