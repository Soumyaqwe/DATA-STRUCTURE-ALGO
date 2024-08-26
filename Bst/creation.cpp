#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
   int data;
   node* left;
   node* right;
   node(int data)
   {
    this->data=data;
    this->left=NULL;
    this->right=NULL;
   }
};
node* insertintobst(node* &root,int data)
{
    if(root==NULL)
    {
         root=new node(data);
         return root;
    }
    if(root->data>data)
    {
       root->left=insertintobst(root->left,data); 
    }
    else{
       root->right=insertintobst(root->right,data);
    }
    return root;
}
void takeinput(node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertintobst(root,data);
        cin>>data;
    }
}
void levelorder(node* &root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        node* front=q.front();
        q.pop();
        if(front==NULL)
        {
            cout<<endl;
            q.push(NULL);
        }
        else{
            cout<<front->data<<" ";
            if(front->left!=NULL)
            {
                q.push(front->left);
            }
            if(front->right!=NULL)
            {
                    q.push(front->right);
            }
        } 
    }
}
void preoreder(node* &root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preoreder(root->left);
    preoreder(root->right);
}
void inorder(node* &root)
{
      if(root==NULL)
        {
            return;
        }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root)
{
      if(root==NULL)
        {
            return;
        }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
bool searchinBST(node* &root,int target)
{
  if(root==NULL)
  {
    return false;
  }
  if(root->data==target)
  {
    return true;
  }
  if(target>root->data)
  {
    return searchinBST(root->right,target);
  }
  else{
    return searchinBST(root->left,target);
  }
}
int  findmin(node* root)
{
    node* temp=root;
    if(temp==NULL)
    {
        return -1;
    }
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}
int findmax(node* root)
{
    node* temp=root;
    if(temp==NULL)
    {
        return -1;
    }
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp->data;
}
int main()
{
    node* root=NULL;
    cout<<"enter the data"<<endl;
    takeinput(root);
    levelorder(root);
    //test case -->10 20 5 11 17 2 4 8 6 25 15 -1
    cout<<endl;
    cout<<"preorder traversal"<<endl;
    preoreder(root);
    cout<<endl;
    cout<<"inorder traversal"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"postorder traversal"<<endl;
    postorder(root);
    cout<<endl;
    bool ans=searchinBST(root,1);
    cout<<ans;
    cout<<endl;
    int mindata=findmin(root);
    cout<<"minimum value is "<<mindata<<endl;
    int maxdata=findmax(root);
    cout<<"maximim value is "<<maxdata<<endl;

}