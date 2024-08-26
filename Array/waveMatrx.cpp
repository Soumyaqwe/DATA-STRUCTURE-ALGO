#include<iostream>
using namespace std;
int main()
{
    int m=3;
    int n=3;
    int arr[m][n]={1,2,3,
                   4,5,6,
                   7,8,9
                        };

    for(int col=0;col<n;col++)
    {
        if(col & 1)
        {
            //odd button  to top
            for(int i=m-1;i>=0;i--)
            {
                cout<<arr[i][col]<<" ";
            }

        }
        else{
            for(int i=0;i<m;i++)
            {
                cout<<arr[i][col]<<" ";
            }
        }
    }
}