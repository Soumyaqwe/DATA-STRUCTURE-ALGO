//bubble sort
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
     for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
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
void selectionsort(int arr[],int n)
{
    int j;
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    //print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertionsort(int arr[],int n)
{
    int j;
    for(int i=1;i<n;i++)
    {
        int val=arr[i];
        for( j=i-1;j>=0;j--)
        {
            if(arr[j]>val)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=val;
    }
    //print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void merge(int arr[],int start,int mid,int end)
{
    int leftlength=mid-start+1;
    int rightlength=end-mid;
    //create 2 array
    int *leftarr=new int[leftlength];
    int *rightarr=new int[rightlength];
    //fill the left & right array
    int index=start;
    //fill left array
    for(int i=0;i<leftlength;i++)
    {
        leftarr[i]=arr[index];
        index++;
    }
    index=mid+1;
    //fill right array
    for(int i=0;i<rightlength;i++)
    {
        rightarr[i]=arr[index];
        index++;
    }
    //got 2 sorted array here now we merge the sorted array
    int i=0;
    int j=0;
    int mainarrayindex=start;
    while(i<leftlength && j<rightlength)
    {
       if(leftarr[i]<=rightarr[j])
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
    delete[]leftarr;
    delete[]rightarr;
}
void mergesort(int arr[],int start,int end,int n)
{
    //base case
    if(start>=end)
    {
        return;
    }
    int mid=(start+end)/2;
    mergesort(arr,start,mid,n);
    mergesort(arr,mid+1,end,n);
    merge(arr,start,mid,end);
}
void solve(int arr[],int start,int end)
{
    //base case
    if(start>=end)
    {
        return;
    }
    int j=start;
    int i=start-1;
    int pivot=end;
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
    solve(arr,start,i-1);
    solve(arr,i+1,end);
}
int main()
{
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"bubble sort"<<endl;
    bubblesort(arr,n);
    cout<<endl;
    cout<<"selection sort"<<endl;
    selectionsort(arr,n);
    cout<<endl;
    cout<<"insertion sort"<<endl;
    selectionsort(arr,n);
    cout<<endl;
    // cout<<"merge sort"<<endl;
    // int start=0;
    // int end=n-1;
    // mergesort(arr,start,end,n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    cout<<"quick sort "<<endl;
    int start=0;
    int end=n-1;
    solve(arr,start,end);
    //print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}