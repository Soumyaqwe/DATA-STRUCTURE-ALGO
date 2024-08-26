#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class graph
{
 public:
    unordered_map<int,list<int>>adjlist;
    void addedge(int u,int v,bool direction)
    {
        //o indicate undirected
        //1 indicate directed
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
    void bfs(int src,unordered_map<int,bool>&visited)
    {
        queue<int>q;
        visited[src]=true;
        q.push(src);
        while(!q.empty())
        {
            int frontnode=q.front();
            q.pop();
            cout<<frontnode<<",";
            //push adjacent element
            for(auto neighor:adjlist[frontnode])
            {
                if(!visited[neighor])
                {
                    q.push(neighor);
                    visited[neighor]=true;
                }
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
   g.addedge(3,5,0);
   g.addedge(3,7,0);
   g.addedge(7,6,0);
   g.addedge(7,4,0);
   unordered_map<int,bool>visited;
  //also different source
  for(int i=0;i<=7;i++)
  {
    if(!visited[i])
    {
        g.bfs(i,visited);
    }
  }

//    g.addedge(0,1,0);
//    g.addedge(1,2,0);
//    g.addedge(2,0,0);
//    //print
//    g.print();
}