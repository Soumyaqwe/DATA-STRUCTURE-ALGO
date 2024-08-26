#include<iostream>
using namespace std;
int main()
{
    int length=0;
    char ch[100];
    cout<<"enter the character"<<endl;
    cin.getline(ch,100);
    int i=0;
    while(ch[i]!='\0')
    {
        length++;
        i++;
    }
    cout<<length;

}