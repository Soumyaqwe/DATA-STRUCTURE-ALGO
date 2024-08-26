#include<iostream>
using namespace std;
// int binarysearch(int arr[],int n,int target)
// {
//     int start=0;
//     int end=n-1;
//     int mid=(start+end)/2;
//     while(start<=end)
//     {
//         if(arr[mid]==target)
//        {
//         return mid;
//        }
//        if(target<arr[mid])
//        {
//         start=0;
//         end=mid-1;
//        }
//        if(target>arr[mid])
//        {
//         start=mid+1;
//         end=n-1;
//        }
//        mid=(start+end)/2;
//     }
//     return -1;
// }
int  binaryrecursive(int arr[],int n,int target,int start,int end)
{
    //base case
    if(start>end)
    {
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    if(target<arr[mid])
    {
       return binaryrecursive(arr,n, target,start, mid-1);
    }
    else{
         return binaryrecursive(arr,n, target,mid+1, end);
    }
}
int main()
{
    int arr[]={1,3,5,7,8,9,10,12};
    int n=8;
    int target=1;
    int start=0;
    int end=n-1;
    cout<< binaryrecursive(arr,n,target,start,end);
//    cout<< binarysearch(arr,n,target);

}