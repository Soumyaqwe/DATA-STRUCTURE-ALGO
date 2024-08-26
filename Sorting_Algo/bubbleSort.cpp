#include<iostream>
using namespace std;               //(BUBBLE SORT)   (TC: N^2)
int main()
{
    int arr[]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
           if(arr[j]>=arr[j+1])
           {
             swap(arr[j],arr[j+1]);
           }

        }
    }
    //print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}