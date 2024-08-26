#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    cout<<q.size()<<endl;
    q.pop();
     cout<<q.size()<<endl;
     cout<<q.front()<<endl;
     cout<<q.back()<<endl;
     if(q.empty())
     {
        cout<<"q is empty"<<endl;
     }
     else{
        cout<<"q is not empty"<<endl;
     }

}