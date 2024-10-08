#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int  main()
{
    stack<int>st;
    st.push(-1);

    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

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
    //print
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}