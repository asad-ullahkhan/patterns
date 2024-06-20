#include <iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the highest no. of the last row: ";
    cin>>length;
    
    for (int i = 1; i <= length; i++)
    {
        for (int j = length; j > i; j--)
        {
            cout<<"  ";
        }
  
        for (int j = i; j >= 1; j--)
            {
                if (j>1)
                {
                    cout<<j<<" ";
                }
                else{
                    for (int j = 1; j <= i; j++)
                    {
                        cout<<j<<" ";
                    }
                    
                }
                
            }
            
         cout<<endl;
    }
    
    for (int i = length; i >= 1; i--)
    {
        for (int j = length; j > i; j--)
        {
            cout<<"  ";
        }
  
        for (int j = i; j >= 1; j--)
            {
                if (j>1)
                {
                    cout<<j<<" ";
                }
                else{
                    for (int j = 1; j <= i; j++)
                    {
                        cout<<j<<" ";
                    }
                    
                }
                
            }
            
         cout<<endl;
    }
    

    return 0;
}