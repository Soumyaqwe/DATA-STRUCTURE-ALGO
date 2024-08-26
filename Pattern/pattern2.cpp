#include<iostream>
using namespace std;
int main()
{
    for(int row=0;row<4;row++)
    {
        int n=row+1;
        for(int col=0;col<row+1;col++)
        {
            cout<<n<<" ";
            n--;
        }
        cout<<endl;
    }
}