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
void insertathead(node* &head,node* &tail,int data)
{
    if(head==NULL || tail==NULL)
    {
        node* newnode=new node(data);
        head=tail=newnode;
    }
    else{
        node* newnode=new node(data);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int findlength(node* head)
{
    int len=0;
    node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
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
void insertatanypoint(node* &head,node* &tail,int data,int pos)
{
    node* left=NULL;
    node* right=head;
    while(pos!=1)
    {
        pos--;
        left=right;
        right=right->next;
    }
    node* newnode=new node(data);
    left->next=newnode;
    newnode->next=right;
    right->prev=newnode;
    newnode->prev=left;
}
void deleted(node* &head,node* &tail,int pos)
{
  int length=findlength(head);
  if(pos==1)
  {
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;
  }
  else if(pos==length)
  {
    node* temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    temp->prev=NULL;
  }
  else{
    node* left=NULL;
    node* right=head;
    while(pos!=1)
    {
        pos--;
        left=right;
        right=right->next;
    }
   node* curr=right->next;
    right->next=NULL;
    curr->prev=NULL;
    left->next=curr;
    curr->prev=left;
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
   deleted(head,tail,3);
    print(head);
}