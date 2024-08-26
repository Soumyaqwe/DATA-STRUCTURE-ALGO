#include<iostream>
using namespace std;
int main()
{
    for(int row=0;row<6;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            if(row==0 || row==5 ||col==0 || row==col)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}