#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    int leftlength=(mid-start)+1;
    int rightlength=end-mid;
    int *leftarr=new int[leftlength];
    int *rightarr=new int[rightlength];
    int index=start;
    //fill left array
    for(int i=0;i<leftlength;i++)
    {
        leftarr[i]=arr[index];
        index++;
    }
    index=mid+1;
    for(int i=0;i<rightlength;i++)
    {
        rightarr[i]=arr[index];
        index++;
    }
    //actual merge logic
    int i=0;
    int j=0;
    int mainarrayindex=start;
    while(i<leftlength && j<rightlength)
    {
        if(leftarr[i]<rightarr[j])
        {
            arr[mainarrayindex]=leftarr[i];
            i++;
            mainarrayindex++;
        }
        else{
            arr[mainarrayindex]=rightarr[j];
            j++;
            mainarrayindex++;
        }
    }
    //remaining element
    while(i<leftlength)
    {
       arr[mainarrayindex]=leftarr[i];
            i++;
            mainarrayindex++; 
    } 
    while(j<rightlength)
    {
        arr[mainarrayindex]=rightarr[j];
            j++;
            mainarrayindex++;
    }
    //heap memory delete 
    delete[]leftarr;
    delete[]rightarr;
}
void mergesort(int arr[],int start,int end)
{
    //base case
    if(start>=end)
    {
        return;
    }
    int mid=(start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main()
{
    int arr[]={1,5,4,3,2,8,9,0,7};
    int n=9;
    int start=0;
    int end=n-1;
    mergesort(arr,start,end);
    //print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
