#include <iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the length of last row: ";
    cin>>length;
    
     for (int i = 1; i <= length; i++)
     {
        for (int j = length; j > 0; j--)
        {
            if (j>i)
            {
               cout<<" ";
            }
             else if(j<=i){
                cout<<"*";
            }
            
        }
        
            
        
         cout<<endl;
     }
     
    return 0;
}