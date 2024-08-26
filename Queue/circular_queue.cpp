#include<iostream>
using namespace std;
class cqueue
{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    //ctor
    cqueue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data)
    {
        if((front==0 && rear==size-1) || (rear==front-1))
        {
            cout<<"overflow"<<endl;
        }
        else if(front && rear==-1)
        {
            front++;
            rear++;
            arr[rear]=data;
        }
        else if(rear==size-1 && front!=0)
        {
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void pop(){
        if(front && rear==-1)
        {
            cout<<"underflow"<<endl;
        }
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==size-1  )
        {
            arr[front]=-1;
            front=0;
        }
        else 
        {
            arr[front]=-1;
            front++;
        }
    }
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
    cqueue q(5);
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(100);
    q.pop();
    q.pop();

    // q.push(110);
    // q.push(120);
    // q.push(130);
    // q.push(140);
    
    q.print();


}