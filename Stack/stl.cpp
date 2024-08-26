#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.pop();
    //stack size
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    if(st.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}