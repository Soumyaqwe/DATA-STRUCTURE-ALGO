#include<iostream>
using namespace std;
  void minimum(int arr[],int n,int index,int &mini)
  {
    //base case
    if(index==n)
    {
        return;
    }
    mini=min(mini,arr[index]);
    minimum(arr,n,index+1,mini);
  }
int main()
{
  int arr[]={1,2,3,4,5};
  int n=5;
  int index=0;
  int mini=INT_MAX;
  minimum(arr,n,index,mini);
  cout<<mini;

}