#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    //ctor
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* createtree()
{
   cout<<"enter the value"<<endl;
   int data;
   cin>>data;
   if(data==-1) 
   {
    return NULL;
   }
   node* root=new node(data);
   //left part
   root->left=createtree();
   //right part
   root->right=createtree();
   return root;
}

int main()
{
  node* root=createtree();
  cout<<root->data<<endl;
}