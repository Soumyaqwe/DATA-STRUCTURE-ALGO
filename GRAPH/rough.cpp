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
        //0 undirect
        //1 direct
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
    bool checkcycyleinbfs(int src,unordered_map<int,bool>&visited)
    {
        unordered_map<int,int>parent;
        queue<int>q;
        q.push(src);
        parent[src]=-1;
        visited[src]=true;
        while(!q.empty())
        {
            int frontnode=q.front();
            q.pop();
            //insert
            for(auto nbr:adjlist[frontnode])
            {
                if(!visited[nbr])
                {
                    q.push(nbr);
                    parent[nbr]=frontnode;
                    visited[nbr]=true;
                }
                 else if( nbr!=parent[frontnode])
                {
                    return true;
                }
            }

        }
        return false;
    }
};
int main()
{ 
    graph g;
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(2,3,0);
    g.print();
    unordered_map<int,bool>visited;
    int n=5;
    bool ans=false;
    for(int i=0;i<5;i++)
    {
        if(!visited[i])
        {
            ans=g.checkcycyleinbfs(i,visited);
            if(ans==true)
            {
                break;
            }
        }
    }
    if(ans==true)
    {
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle is absent"<<endl;
    }


}