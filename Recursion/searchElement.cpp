#include<iostream>
using namespace std;
bool search(int arr[],int n,int index,int target)
{
    //base case
    if(index==n)
    {
        return false;
    }
    if(arr[index]==target)
    {
        return true;
    }
   bool ans= search(arr,n,index+1,target);
   return ans;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int index=0;
    int target=12;
    bool ans=search(arr,n,index,target);
    cout<<ans;
}