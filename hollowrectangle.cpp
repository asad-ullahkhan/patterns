#include <iostream>
using namespace std;

int main()
{
    int length,width;
    cout<<"Enter the length of rectangle: ";
    cin>>length;
    cout<<"Enter the width of rectangle: ";
    cin>>width;
    for (int i = 1; i <= width; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (i==1||i==width||j==1||j==length)
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
            
        }
      cout<<endl;  
    }
    
      
    return 0;
}