#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph
{
  public:
  unordered_map<int,list<int>>adjlist;
    void addedge(int u,int v,bool direction)
    {
        adjlist[u].push_back(v);
        //0->directed
        //1->un directed
        if(direction==1)
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
};
int main()
{
  graph g;
  //for undirected graph
//   g.addedge(0,1,1);
//   g.addedge(1,2,1);
//   g.addedge(2,0,1);
//for directed graph

  g.addedge(0,1,0);
  g.addedge(1,2,0);
  g.addedge(0,2,0);
  g.print();
}
