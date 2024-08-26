#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char>st;
    string str="soumya";
    for(int i=0;i<str.length();i++)
    {
       char ch=str[i];
       st.push(ch);
    }
    //print
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }


}