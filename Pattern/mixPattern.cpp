#include<iostream>
using namespace std;
int main()
{
    //part A
    for(int row=0;row<5;row++)
    {
        //for star
        for(int col=0;col<5-row;col++)
        {
            cout<<"*";
        }
        //for space
        for(int col=0;col<(2*row+1);col++)
        {
            cout<<" ";
        }
        //for star
         for(int col=0;col<5-row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //part B
    for(int row=0;row<5;row++)
    {
        //star
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        //space 
        for(int col=0;col<(10-(2*row)-1);col++)      //2n-(2*row)-1
        {
            cout<<" ";
        }
        //star
         for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}