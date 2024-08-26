#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int e;
    cout<<"enter the no. of nodes"<<endl;
    cin>>n;
    cout<<"enter the no. of edges"<<endl;
    cin>>e;
    //create matrix
    vector<vector<int>>adj(n,vector<int>(n,0));
    int u,v;
    for(int i=0;i<e;i++)
    {
        cin>>u>>v;
        adj[u][v]=1;
    }
    //print
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}