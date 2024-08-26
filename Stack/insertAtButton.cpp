#include<iostream>
#include<stack>
using namespace std;
void insertatbutton(stack<int> &st,int element)
{
    //base case
    if(st.empty())
    {
        st.push(element);
        return;
    }
    int temp=st.top();
    st.pop();
    insertatbutton(st,element);
    st.push(temp);
}
int main()
{
   stack<int>st;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   int element=5;
   insertatbutton(st,element);
   //print
   while(!st.empty())
   {
    cout<<st.top()<<endl;
    st.pop();
   }


}