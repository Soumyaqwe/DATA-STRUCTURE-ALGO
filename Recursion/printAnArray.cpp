#include<iostream>
using namespace std;
void print(int arr[],int n,int index)
{
    //base case
  if(index==n)
  {
    return;
  }
  cout<<arr[index]<<" ";
  print(arr,n,index+1);
}
int main()
{
  int arr[]={1,2,3,4,5};
  int n=5;
  int index=0;
  print(arr,n,index);
}