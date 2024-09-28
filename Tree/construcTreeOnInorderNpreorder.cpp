#include<iostream>
#include<queue>
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
int findpos(int arr[],int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
node* createtreeusingpreorderandinorder(int inorder[],int preorder[],int n,int &preorderindex,int inorderstartindex,int inorderendindex)
{
    //base case
    if(preorderindex>=n || inorderstartindex>inorderendindex)
    {
        return NULL;
    }
    //craete root node
    int element=preorder[preorderindex++];
    node* root=new node(element);
    int pos=findpos(inorder,n,element);
    root->left=createtreeusingpreorderandinorder(inorder,preorder,n,preorderindex,inorderstartindex,pos-1);
    root->right=createtreeusingpreorderandinorder(inorder,preorder,n,preorderindex,pos+1,inorderendindex);
    return root;
}
void levelordertraversal(node* root)
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
            //insert
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
int main()
{
    int inorder[]={40,20,50,10,60,30,70};
    int preorder[]={10,20,40,50,30,60,70};
    int n=7;
    int preorderindex=0;
    int inorderstartindex=0;
    int inorderendindex=n-1;
    node* root=createtreeusingpreorderandinorder(inorder,preorder,n,preorderindex,inorderstartindex,inorderendindex);
    levelordertraversal(root);

  return 0;
}