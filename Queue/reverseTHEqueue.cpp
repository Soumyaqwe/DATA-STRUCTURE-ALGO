#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseQueue(queue<int> &q)
{
    stack<int>st;
   while(!q.empty())
   {
    int frontelement=q.front();
    q.pop();
    st.push(frontelement);
   }
   while(!st.empty())
   {
    int element=st.top();
    st.pop();
    q.push(element);
   }
}
int main()
{
   queue<int>q;
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);
   q.push(60);
   reverseQueue(q);
   //print
   while(!q.empty())
   {
    cout<<q.front()<<" ";
    q.pop();
   }

}