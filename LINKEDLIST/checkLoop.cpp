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
};
void insertattail(node* &head,node* &tail,int data)
{
    if(head==NULL && tail==NULL)
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
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
bool checkforloop(node* &head)
{
    node* fast=head;
    node* slow=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}
  node* findmeetpoint(node* &head)
  {
      node* fast=head;
    node* slow=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        } 
        if(fast==slow)
        {
           break;       
        }    
    }
    slow=head;
    while(fast!=slow)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
 }
 void removeloop(node* &head)
 {
    node* fast=head;
    node* slow=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        } 
        if(fast==slow)
        {
           break;       
        }    
    }
    slow=head;
    while(fast!=slow)
    {
        slow=slow->next;
        fast=fast->next;
    }
    node* startpoint=slow;
    node* temp=fast;
    while(temp->next!=startpoint)
    {
        temp=temp->next;
    }
    temp->next=NULL;

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
    tail->next=head->next;
    removeloop(head);
    print(head);
    // cout<<endl;
//    bool ans= checkforloop(head);
//    cout<<ans;
//find meet element
// cout<<findmeetpoint(head)->data;
//remove loop

  
  
}