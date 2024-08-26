#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,3,2,1};
    int n=5;
    int val,j;
    for(int i=1;i<n;i++)
    {
        val=arr[i];
        for( j=i-1;j>=0;j--)
        {
            if(arr[j]>val)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=val;
    }
    //print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}