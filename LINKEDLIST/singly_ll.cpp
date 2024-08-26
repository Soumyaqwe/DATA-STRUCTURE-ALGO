#include<iostream>
using namespace std;
class node
{
    public:
  int data;
  node* next;
  node(int data)
  {
    this->data=data;
    this->next=NULL;
  }
  ~node()
  {
    cout<<this->data<<endl;
  }

};
 void insertathead(node* &head,node* &tail,int data)
 {
    if(head==NULL||tail==NULL )
    {
       node* newnode=new node(data);
       head=tail=newnode;
    }
    else{
        //create a new node
        node* newnode=new node(data);
        newnode->next=head;
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
        tail=newnode;
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
 void insertatmiddle(node* &head,node* &tail,int data,int pos)
 {
    int length=findlength(head);
    if(pos==1)
    {
        insertathead(head,tail,data);
    }
    else if(pos==length+1)
    {
        insertattail(head,tail,data);
    }
    else{
        node* prev=NULL;
        node* curr=head;
        while(pos!=1)
        {
            pos--;
            prev=curr;
            curr=curr->next;
        }
        //create new node
        node* newnode=new node(data);
        prev->next=newnode;
        newnode->next=curr;
    }
 }
 void deleteathead(node* &head,node* &is_trivially_destructible,int pos)
 {
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
 }
 void deleteatend(node* &head,node* &tail,int pos)
 {
    node* temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
 }
 void deleteatanypoint(node* &head,node* &tail,int pos)
 {
    node* prev=NULL;
    node* curr=head;
    while(pos!=1)
    {
        pos--;
        prev=curr;
        curr=curr->next;
    }
    node* temp=curr->next;
    curr->next=NULL;
    prev->next=temp;
    delete curr;
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
//    insertatmiddle(head,tail,25,3);

    // deleteathead(head,1);
    // deleteatend(head,tail,5);
    deleteatanypoint(head,tail,3);
    print(head);

}