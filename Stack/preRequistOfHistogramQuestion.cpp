#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextsmallerelement(vector<int> &input)
{
     stack<int>st;
    st.push(-1);

    vector<int>ans(input.size());

    for(int i=input.size()-1;i>=0;i--)
    {
      int curr=input[i];  
      while(st.top()>=curr)
      {
        st.pop();
      }
      //element found
      ans[i]=st.top();
      st.push(curr);
    }
    return ans;
}
vector<int>prevsmallerelement(vector<int> &input)
{
     stack<int>st;
    st.push(-1);

    vector<int>ans(input.size());

    for(int i=0;i<input.size();i++)
    {
      int curr=input[i];  
      while(st.top()>=curr)
      {
        st.pop();
      }
      //element found
      ans[i]=st.top();
      st.push(curr);
    }
    return ans;
}
int  main()
{
    stack<int>st;
    st.push(-1);

    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

   //print
   vector<int>ans1=nextsmallerelement(input);
   for(int i=0;i<input.size();i++)
   {
    cout<<ans1[i]<<" ";
   }
   cout<<endl;
    vector<int>ans2=prevsmallerelement(input);
   for(int i=0;i<input.size();i++)
   {
    cout<<ans2[i]<<" ";
   }
   cout<<endl;
}