#include<iostream>
using namespace std;
int getlength(char ch[])
{
    int i=0;
    int len=0;
  while(ch[i]!='\0')
  {
    len++;
    i++;
  }
  return len;
}
int main()
{
    char ch[100];
    cout<<"enter the charcter"<<endl;
    cin.getline(ch,100);
    int start=0;
    int end=getlength(ch)-1;
    while(start<=end)
    {
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
    cout<<ch;
}