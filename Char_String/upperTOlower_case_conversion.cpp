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
    cout<<"enter the character"<<endl;
    cin.getline(ch,100);
    int i=0;
   for(int i=0;i<getlength(ch);i++)
   {
    char curr=ch[i];
    if(curr>='A' && curr<='Z')
   {
     curr=curr-'A'+'a';
     ch[i]=curr;
   }
   }
   cout<<ch;
    
}