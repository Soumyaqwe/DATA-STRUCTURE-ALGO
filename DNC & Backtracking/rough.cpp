#include<iostream>
using namespace std;
void subsequence(string str,int n,string output,int index)
{
    //base case
    if(index>=str.length())
    {
        cout<<output<<endl;
        return;
    }
    char ch=str[index];
    subsequence(str,n,output+ch,index+1);
    subsequence(str,n,output,index+1);
}
int main()
{
    string str="xy";
    string output="";
    int index=0;
    int n=str.length();
    subsequence(str,n,output,index);
}