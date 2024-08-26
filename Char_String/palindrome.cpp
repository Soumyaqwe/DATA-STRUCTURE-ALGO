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
bool checkpalindrome(char ch[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        if(ch[start]==ch[end])
        {
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    char ch[100];
    cout<<"enter the character"<<endl;
    cin.getline(ch,100);
    int n =getlength(ch);
    cout<<checkpalindrome(ch,n);

}