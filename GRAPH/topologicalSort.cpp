#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
class graph
{
 public:
   unordered_map<int,list<int>>adjlist;
   void addedge(int u,int v,bool direction)
   {
    adjlist[u].push_back(v);
    if(direction==0)
    {
        adjlist[v].push_back(u);        
    }
   }
   void print()
   {
    for(auto nodes:adjlist)
    {
        cout<<nodes.first<<"->";
        for(auto nbr:nodes.second)
        {
            cout<<nbr<<",";
        }
        cout<<endl;
    }
   }
  void bfs(int src,unordered_map<int,bool>&visited)
  {
    visited[src]=true;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int front=q.front();
        cout<<front<<" ";
        q.pop();
        for(auto nbr:adjlist[front])
        {
            if(!visited[nbr])
            {
                q.push(nbr);
                visited[nbr]=true;
            }
        }
    }
  }
  void dfs(int src,unordered_map<int,bool>&visited)
  {
    visited[src]=true;
      cout<<src<<" ";
    for(auto nbr:adjlist[src])
    {
        if(!visited[nbr])
        {
            dfs(nbr,visited);
        }
    }
  }
};
int main()
{
  graph g;
  g.addedge(0,1,0);
  g.addedge(1,2,0);
  g.addedge(1,3,0);
  g.addedge(3,7,0);
  g.addedge(3,5,0);
  g.addedge(7,6,0);
  g.addedge(7,4,0);
  unordered_map<int,bool>visited;
  int n=8;
  for(int i=0;i<n;i++)
  {
    if(!visited[i])
    {
        g.dfs(i,visited);
    }
  }
}