#include<iostream>
#include<stack>
using namespace std;
void insertinsortedstack(stack<int>&st,int element)
{
  //base case
  if(st.empty() || st.top()<=element)
  {
    st.push(element);
    return;
  }
  int temp=st.top();
  st.pop();
  insertinsortedstack(st,element);
  st.push(temp);
}
void sortthestack(stack<int>&st)
{
    //base case
    if(st.empty())
    {
        return;
    }
    int temp=st.top();
    st.pop();
    sortthestack(st);
    insertinsortedstack(st,temp);
}
int  main()
{
    stack<int>st;
    st.push(50);
    st.push(35);
    st.push(1);
    st.push(9);
    st.push(30);
    sortthestack(st);
    //print
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}