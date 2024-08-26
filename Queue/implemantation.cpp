#include<iostream>
using namespace std;
class queue
{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    //ctor
    queue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data)
    {
        if(rear==size-1)
        {
            cout<<"Q is overflow"<<endl;
        }
        else if(front=rear==-1)
        {
            front++;
            rear++;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void pop()
    {
        if(front && rear==-1)
        {
            cout<<"Q is underflow"<<endl;
        }
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    int getfront()
       {
        if(front==-1)
        {
            cout<<"front can not find"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    int getback()
    {
        if(rear==-1)
        {
            cout<<"rear element can not find"<<endl;
            return  -1;
        }
        else{
            return arr[rear];
        }
    }
    int getsize()
    {
        if(front && rear ==-1)     //glti krunga.......
        {
            return 0;
        }
        else{
            return (rear-front)+1;
        }
    }
    void isempty()
    {
        if(front && rear ==-1)
        {
            cout<<"Q is empty"<<endl;
        }
        else{
            cout<<"Q is not empty"<<endl;
        }
    }
    void print()
    {
        for(int i=0;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    queue q(5);
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);
    q.push(10);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    // q.pop();
    // cout<<q.getfront()<<endl;
    // cout<<q.getback()<<endl;
    cout<<q.getsize()<<endl;
    // q.isempty();
   

 
    q.print();

}