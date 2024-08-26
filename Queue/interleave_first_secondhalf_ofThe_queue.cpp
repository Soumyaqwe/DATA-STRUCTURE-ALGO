#include<iostream>
#include<queue>
using namespace std;
void interleave(queue<int> &first)
{
    int n=first.size()/2;
    queue<int>second;
    for(int i=0;i<n;i++)
    {
        int temp=first.front();
        first.pop();
        second.push(temp);
    }
    for(int i=0;i<n;i++)
    {
        int temp=second.front();
        second.pop();
        first.push(temp);
        
        int element=first.front();
        first.pop();
        first.push(element);
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
    
    interleave(q);
    //print
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}