#include<iostream>
#include<vector>
using namespace std;
void mergetwosortedarray(int arr[],int arrsize,int brr[],int brrsize,vector<int>&ans)
{
    int i=0;
    int j=0;
    while(i<arrsize && j<brrsize )
    {
        if(arr[i]<=brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }
    //many element are left
    //if arr element are left
    while(i<arrsize)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while(j<brrsize)
    {
        ans.push_back(brr[j]);
        j++;
    }
}
int main()
{
    int arr[]={1,3,5,7};
    int arrsize=4;
    int brr[]={2,4,6,8,9,10};
    int brrsize=6;
    vector<int>ans;
    mergetwosortedarray(arr,arrsize,brr,brrsize,ans);
    //print
    for(int i:ans)
    {
        cout<<i<<" ";
    }
}