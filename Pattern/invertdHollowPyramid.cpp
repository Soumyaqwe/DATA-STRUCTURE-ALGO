#include<iostream>
using namespace std;
int main()
{
  for(int row=0;row<5;row++)
  {
    //space
    for(int col=0;col<row;col++)
    {
        cout<<" ";
    }
    //star
    for(int col=0;col<5-row;col++)
    {
      if(row==0 || row==4 || col==0 || col==5-row-1)
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