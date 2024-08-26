#include<iostream>
#include<vector>
using namespace std;
int solveusingrec(int n,int k)
{
    //base case
    if(n==1)
    {
        return k;
    }
    if(n==2)
    {
        return k+(k*(k-1));
    }
    int ans=(solveusingrec(n-1,k)+solveusingrec(n-2,k))*(k-1);
    return ans;
}
int solveusingmem(int n,int k,vector<int>&dp)
{
    //base case
    if(n==1)
    {
        return k;
    }
    if(n==2)
    {
        return k+(k*(k-1));
    }
    //,step 3
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=(solveusingmem(n-1,k,dp)+solveusingmem(n-2,k,dp))*(k-1);
    return dp[n];
}
int solveusingtab(int n,int k)
{
    //step 1
    vector<int>dp(n+1,-1);
    dp[1]=k;
    dp[2]=k+(k*(k-1));
    for(int i=3;i<=n;i++)
    {
        dp[i]=(dp[i-1]+dp[i-2])*(k-1);
    }
    return dp[n];
}
int solveusingso(int n,int k)
{
    int prev=k;
    int curr=k+(k*(k-1));
    int ans;
    for(int i=3;i<=n;i++)
    {
        ans=(curr+prev)*(k-1);
        prev=curr;
        curr=ans;
    }
    return ans;
}
int main()
{
    int n=3;
    int k=3;
    // int ans=solveusingrec(n,k);
    // cout<< ans;
    //solve using memeoiZation
    //step 1
    // vector<int>dp(n+1,-1);
    // int ans=solveusingmem(n,k,dp);
    // cout<<ans;
    //solve using tabulation
    // int ans=solveusingtab(n,k);
    // cout<<ans;
   //solve using space optimization
   int ans=solveusingso(n,k);
   cout<<ans;
}