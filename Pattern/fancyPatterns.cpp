#include<iostream>
using namespace std;
int main()
{
    for(int row=0;row<5;row++)
    {
        for(int col=0;col<(2*row+1);col++)
        {
           if(col%2==0)
           {
            cout<<row+1;
           }
           else{
            cout<<"*";
           }
        }
        cout<<endl;
    }
}