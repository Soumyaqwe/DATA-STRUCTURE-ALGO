#include <iostream>
using namespace std;
class stack
{
    public:
    int *arr;
    int top;
    int size;
    // ctor
    stack(int size)
    {
        arr = new int[size];
        this->top = -1;
        this->size = size;
    }
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "stack is overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is underflow" << endl;
            return;
        }
        else
        {
            top--;
        }
    }
    int gettop()
    { 
       if(top==-1)
       {
        cout<<"stack is underflow"<<endl;
       }
       else{
        return top + 1;
       }
    }
    int getsize()
    { 
        if(top==-1)
        {
            return 0;
        }
        else{
            return top + 1;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void print()
    {
        for(int i=0;i<getsize();i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.print();
}