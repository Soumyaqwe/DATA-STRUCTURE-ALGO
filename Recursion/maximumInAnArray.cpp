#include<iostream>
using namespace std;
void maximumnumer(int arr[],int n,int index,int &maxi)
{
    //base case
    if(index==n)
    {
        return;
    }
    maxi=max(maxi,arr[index]);
    maximumnumer(arr,n,index+1,maxi);
   
}
int main()
{
    int arr[]={1,2,3,4,50};
    int n=5;
    int index=0;
    int maxi=INT_MIN;
    maximumnumer(arr,n,index,maxi);
    cout<<maxi;
}