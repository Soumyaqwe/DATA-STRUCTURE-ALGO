#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>
using namespace std;
class graph
{
  public:
   unordered_map<int,list<int>>adjlist;
   void addedge(int u,int v,bool direction)
   {
    //1 indicate directed
    //0 indicate undirected
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
        for(auto neighor:nodes.second)
        {
            cout<<neighor<<",";
        }
        cout<<endl;
    }
   }
   void dfs(int src,unordered_map<int,bool>&visited)
   {
    cout<<src<<",";
    visited[src]=true;
    //call rec
    for(auto neighor:adjlist[src])
    {
        if(!visited[neighor])
        {
            dfs(neighor,visited);
        }
    }
  }
  void toposort(int src,unordered_map<int,bool>&visited,stack<int>&st)
  {
    visited[src]=true;
    for(auto nbr:adjlist[src])
    {
        if(!visited[nbr])
        {
            toposort(nbr,visited,st);
        }
    }
     st.push(src);
  }
};
int main()
{
   graph g;
//    g.addedge(0,1,0);
//    g.addedge(1,2,0);
//    g.addedge(2,0,0);
//    g.print();
     g.addedge(0,1,1);
     g.addedge(1,2,1);
     g.addedge(2,3,1);
     g.addedge(3,4,1);
     g.addedge(3,5,1);
     g.addedge(4,6,1);
     g.addedge(5,6,1);
     g.addedge(6,7,1);
    unordered_map<int,bool>visited;
    stack<int>st;
    for(int i=0;i<8;i++)
    {
        //coz it running for both connected as well as disconnected graph
        if(!visited[i])
        {
            g.toposort(i,visited,st);
        }
    }
    //print
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}