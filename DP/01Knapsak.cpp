    #include<iostream>
    #include<vector>
    using namespace std;
    //where index is placed on last index  (Right ->Left)
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
        //include exclude pattern applied here
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
        //step 3
        if(dp[index][capacity]!=-1)
        {
            return dp[index][capacity];
        }
        //include exclude pattern applied here
        int include=0;
        if(weight[index]<=capacity)
        {
        include=value[index]+solveusingmem(weight,value,index-1,capacity-weight[index],dp);
        }
        int exclude=solveusingmem(weight,value,index-1,capacity,dp);
        dp[index][capacity]=max(include,exclude);
        return dp[index][capacity];
    }
    int main()
    {
        int weight[]={4,5,1};
        int value[]={1,2,3};
        int n=3;
        int capacity=4;
        // int ans=solveusingrec(weight,value,n-1,capacity);
        // cout<<ans;
        //solve using recursion
        //step 1
        vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
        int ans=solveusingmem(weight,value,n-1,capacity,dp);
        cout<<ans;
    }