#include <iostream>
using namespace std;

int main()
{
    int nos;              //nos= number of stars
    cout<<"enter the no. of star you want in zigzag: ";
    cin>>nos;
    for (int r = 1; r <= 3; r++)        //r=row
    {
        for (int c = 1; c <= nos; c++)  //c=column
        {
            if ((r+c)%4==0||(r==2&&c%4==0))
            {
                cout<<"*";
            }
            else{   
                cout<<" ";
            }
            
        }
        
       cout<<endl;

    }
    




    return 0;
}