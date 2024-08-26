#include<iostream>
using namespace std;
class node
{ 
    public:
    int data;
    node* next;
    node* prev;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void insertattail(node* &head,node* &tail,int data)
{
    if(head==NULL || tail==NULL)
    {
        node* newnode=new node(data);
        head=tail=newnode;
    }
    else{
        node* newnode=new node(data);
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void reverseDll(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL)
    {
        node* nextnode=curr->next;
        
    }
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    insertattail(head,tail,10);
    insertattail(head,tail,20);
    insertattail(head,tail,30);
    insertattail(head,tail,40);
    insertattail(head,tail,50);
    print(head);
}