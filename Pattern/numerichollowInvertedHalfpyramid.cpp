#include<iostream>
using namespace std;
int main()
{
    for(int row=0;row<5;row++)
    {
        for(int col=row+1;col<=5;col++)
        {
            if(row==0 || row==3 || row==4 ||row+col==4 || col==0)
            {
                cout<<col<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
} 