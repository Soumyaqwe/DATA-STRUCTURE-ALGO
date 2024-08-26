#include<iostream>
using namespace std;
void merge(int arr[],int start,int end,int mid)
{
    int leftlength=(mid-start)+1;
    int rightlength=end-mid;
    //create 2 array for storing the value
    int* leftarr=new int[leftlength];
    int *rightarr=new int[rightlength];
    //storing  the data
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

    //actual merge logic
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
    delete[] leftarr;
    delete [] rightarr;

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
    merge(arr,start,end,mid);
}
int main()
{
    int arr[]={50,10,30,40,20,60};
    int size=6;
    int start=0;
    int end=size-1;
    mergesort(arr,start,end);
    //print
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}