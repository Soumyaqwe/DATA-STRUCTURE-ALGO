#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
int main()
{
    int arr[]={5,4,3,2,1};
    int n=5;

    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}