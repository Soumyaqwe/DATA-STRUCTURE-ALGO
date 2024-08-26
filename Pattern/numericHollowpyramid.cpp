#include<iostream>
using namespace std;
int main()
{
    for(int row=0;row<5;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            if(row==0 || row==1 || row==4 ||row==col || col==0)
            {
                cout<<col+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}