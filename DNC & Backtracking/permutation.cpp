#include<iostream>
using namespace std;
void permutation(string &str,int n,int i)
{
    //base case
    if(i>=n)
    {
        cout<<str<<" ";
        return;
    }
    for(int j=i;j<n;j++)
    {
        swap(str[i],str[j]);
        permutation(str,n,i+1);
        swap(str[i],str[j]);
    }
}
int main()
{
    string str="xyz";
    int n=str.length();
    int i=0;
    permutation(str,n,i);
}