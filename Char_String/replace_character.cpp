#include<iostream>
using namespace std;
int main()
{
    char ch[100];
    cout<<"enter the character"<<endl;
    cin.getline(ch,100);
    int i=0;
   while(ch[i]!='\0')
   {
    if(ch[i]=='@')
    {
        ch[i]=' ';
    }
    else{
        i++;
    }
   }
   cout<<ch;
}