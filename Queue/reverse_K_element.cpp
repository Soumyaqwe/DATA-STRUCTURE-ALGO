#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void revesekelement(queue<int> &q,int k)
{
    int n=q.size();
    stack<int>st;

    for(int i=0;i<k;i++)
    {
        int temp=q.front();
        q.pop();
        st.push(temp);
    }

while(!st.empty())
{
    int element=st.top();
    st.pop();
    q.push(element);
}

for(int i=0;i<n-k;i++)
{
    int temp=q.front();
    q.pop();
    q.push(temp);
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
    revesekelement(q,4);
    //print
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}