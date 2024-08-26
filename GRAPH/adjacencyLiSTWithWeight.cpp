#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph
{
  public:
  unordered_map<int,list<pair<int,int>>>adjlist;
  void addedge(int u,int v,int weight,bool direction)
  {
    adjlist[u].push_back({v,weight});
    //1 indicate undirected
    //0 indicate  directed
    if(direction==1)
    {
        adjlist[v].push_back({u,weight});        
    }
  }
  void print()
  {
    for(auto nodes:adjlist)
    {
        cout<<nodes.first<<"->";
        for(auto neighor:nodes.second)
        {
            cout<<"("<<neighor.first<<","<<neighor.second<<")";
        }
        cout<<endl;
    } 
  }

};
int main()
{
    graph g;
    g.addedge(0,1,5,1);
    g.addedge(1,2,7,1);
    g.addedge(0,2,6,1);
    g.print();

}