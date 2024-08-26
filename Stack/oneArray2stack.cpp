#include<iostream>
using namespace std;
class stack
{
  public:
  int *arr;
  int size;
  int top1;
  int top2;
  //ctor
  stack(int size)
  {
    arr=new int[size];
    this->size=size;
    this->top1=-1;
    this->top2=size;
  }
  void push1(int data)
  {
    if(top2-top1==1)
    {
        cout<<"stack is overflow"<<endl;
    }
    else{
        top1++;
        arr[top1]=data;
    }
  }
  void push2(int data)
  {
    if(top2-top1==1)
    {
        cout<<"stack is overflow"<<endl;
    }
    else{
        top2--;
        arr[top2]=data;
    }
  }
  void pop1()
  {
    if(top1==-1)
    {
        cout<<"stack is underflow"<<endl;
    }
    else{
        arr[top1]=0;
        top1--;
    }
  }
  void pop2()
  {
    if(top2==size)
    {
        cout<<"stack is underflow"<<endl;
    }
    else{
        arr[top2]=0;
        top2++;
    }
  }
  //print
  void print()
  {
    for(int i=0;i<size;i++)
    {
      cout<<arr[i]<<" ";
    }
  }
};
int main()
{
    stack st(5);
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push2(100);
    st.push2(200);
    st.push2(123);
    st.print();
    
  

}