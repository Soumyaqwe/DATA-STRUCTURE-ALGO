#include<iostream>
#include<stack>
using namespace std;
void findmiddleelement(stack<int>&st,int pos)
{
   if(st.size()==pos)
   {
      cout<<st.top();
      return;
   }
   int temp=st.top();
   st.pop();
   findmiddleelement(st,pos);
   st.push(temp);
}
int main()
{
   stack<int>st;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);
   int pos=(st.size()/2)+1;
   findmiddleelement(st,pos);
   //print
   // while(!st.empty())
   // {
   //    cout<<st.top()<<endl;
   //    st.pop();
   // }
}