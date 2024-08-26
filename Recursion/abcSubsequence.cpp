#include<iostream>
using namespace std;
void subsequence(string str,string output,int index)
{
  //base case
  if(index==str.length())
  {
    cout<<output<<" ";
    return;
  }
  char ch=str[index];
  //include
  subsequence(str,output+ch,index+1);
  //exclude
    subsequence(str,output,index+1);
}
int main()
{
    string str="abc";
    string output="";
    int index=0;
    subsequence(str,output,index);
}