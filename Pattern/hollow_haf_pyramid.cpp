#include<iostream>
using namespace std;
int main()
{
    for(int row=0;row<6;row++)
    {
        int totalcol=row+1;
        for(int col=0;col<totalcol;col++)
        {
           if(row==0 || row==1 || row==5)
           {
            cout<<"* ";
           }
           else{
                if(col==0 || col==totalcol-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
           }
            
        }
        cout<<endl;
    }
}