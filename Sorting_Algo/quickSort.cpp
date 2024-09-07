#include<iostream>
using namespace std;
void quicksort(int arr[],int start,int end)
{
   //base case
   if(start>=end)
   {
    return;
   }
   int pivot=end;
   int  i=start-1;
   int j=start;
   while(j<pivot)
   {
    if(arr[j]<arr[pivot])
    {
        i++;
        swap(arr[i],arr[j]);
    }
    j++;
   }
   i++;
   swap(arr[i],arr[pivot]);
   quicksort(arr,start,i-1);
   quicksort(arr,i+1,end);
}
int main()
{
    int arr[]={7,2,1,8,6,3,5,4};
    int n=8;
    int start=0;
    int end=n-1;
    quicksort(arr,start,end);
    //print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

//test case for better UNDERSTANDING
//  7 | 2 | 1 | 8 | 6 | 3 | 5 | 4 