#include <iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    // ctor
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *createtree()
{
    cout << "enter the value" << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *root = new node(data);
    // left part
    root->left = createtree();
    // right part
    root->right = createtree();
    return root;
}
void preordertraversal(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // nlr
    cout << root->data << " ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void inordertraversal(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // lnr
    inordertraversal(root->left);
    cout << root->data << " ";
    inordertraversal(root->right);
}
void postordertraversal(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // lrn
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout << root->data << " ";
}
void levelordertraversal(node* root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
         node* front=q.front();
         q.pop();
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
void levelwiseprint(node* root)
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


//this is the main intent 
void binarytreeTOdoublyLL(node* root,node* &head)
{
    //base cae
    if(root==NULL)
    {
        return;
    }
    //rnl
    binarytreeTOdoublyLL(root->right,head);
    //n
    root->right=head;
    if(head!=NULL)
     head->left=root;
    head=root;
    //l
    binarytreeTOdoublyLL(root->left,head);
}
void printll(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->right;
    }
    cout<<endl;
}
int main()
{
    node *root = createtree();
   node* head=NULL;
   binarytreeTOdoublyLL(root,head);
   printll(head);

    // cout << "level order traversal" << endl;
    // levelordertraversal(root);
    // cout << endl;

}