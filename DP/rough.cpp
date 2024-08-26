#include<iostream>
#include<vector>
using namespace std;
int solveusingrec(int weight[],int value[],int index,int capacity)
{
  //base case
  if(index==0)
  {
    if(weight[index]<=capacity)
    {
        return value[index];
    }
    else{
        return 0;
    }
  }
  int include=0;
  if(weight[index]<=capacity)
  {
    include=value[index]+solveusingrec(weight,value,index-1,capacity-weight[index]);
  }
  int exclude=solveusingrec(weight,value,index-1,capacity);
  int ans=max(include,exclude);
  return ans;
}
int solveusingmem(int weight[],int value[],int index,int capacity,vector<vector<int>>&dp)
{
    //base case
    if(index==0)
  {
    if(weight[index]<=capacity)
    {
        return value[index];
    }
    else{
        return 0;
    }
  }
  if( dp[index][capacity]!=-1)
  {
    return  dp[index][capacity];
  }
  int include=0;
  if(weight[index]<=capacity)
  {
    include=value[index]+solveusingrec(weight,value,index-1,capacity-weight[index]);
  }
  int exclude=solveusingrec(weight,value,index-1,capacity);
  dp[index][capacity]=max(include,exclude);
  return dp[index][capacity];
}
int solveusingtab(int weight[],int value[],int n,int capacity)
{
    //step 1
    vector<vector<int>>dp(n,vector<int>(capacity+1,0));
    for(int w=0;w<=capacity;w++)
    {
        if(weight[0]<=capacity)
            {
                dp[0][w]=value[0];
            }
        else{
              dp[0][w]=0;
            }
    }

}
int main()
{
    int weight[]={4,5,1};
    int value[]={1,2,3};
    int n=3;
    int capacity=4;
    // int ans=solveusingrec(weight,value,n-1,capacity);
    // cout<<ans;
    //solve using memoization
    //step 1
    // vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
    // int ans=solveusingmem(weight,value,n-1,capacity,dp);
    // cout<<ans;
    //solve using tabulation
    int ans=solveusingtab(weight,value,n-1,capacity);
    cout<<ans;
}