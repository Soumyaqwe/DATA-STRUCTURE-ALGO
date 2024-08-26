#include <iostream>
#include <queue>
#include <vector>
#include<map>
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
    int data;
    cout << "enter the data" << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *root = new node(data);
    // left sub tree
    root->left = createtree();
    root->right = createtree();
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
void leftviewprint(node* root,int level,vector<int>&leftview)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    if(level==leftview.size())
    {
        leftview.push_back(root->data);
    }
    //left 
    leftviewprint(root->left,level+1,leftview);
    //right
    leftviewprint(root->right,level+1,leftview);
}
void rightviewprint(node* root,int level,vector<int>&rightview)
{
    //base case
    if(root==NULL)
    {
        return ;
    }
    if(level==rightview.size())
    {
        rightview.push_back(root->data);
    }
    //right
    rightviewprint(root->right,level+1,rightview);
    //left
    rightviewprint(root->left,level+1,rightview);

}
void topviewprint(node* root)
{
    map<int,int>hdtonodemap;
    queue<pair<node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<node*,int>temp=q.front();
        q.pop();
        node* frontnode=temp.first;
        int hd=temp.second;
        if(hdtonodemap.find(hd)==hdtonodemap.end())
        {
            hdtonodemap[hd]=frontnode->data;
        }

        if(frontnode->left!=NULL)
        {
            q.push(make_pair(frontnode->left,hd-1));
        }
         if(frontnode->right!=NULL)
        {
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
    cout<<"printint node"<<endl;
    for(auto i:hdtonodemap)
    {
        cout<<i.second<<" ";
    }
}

void buttomviewprint(node* root)
{
    map<int,int>hdtonodemap;
    queue<pair<node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<node*,int>temp=q.front();
        q.pop();
        node* frontnode=temp.first;
        int hd=temp.second;
       
         hdtonodemap[hd]=frontnode->data;

        if(frontnode->left!=NULL)
        {
            q.push(make_pair(frontnode->left,hd-1));
        }
         if(frontnode->right!=NULL)
        {
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
    cout<<"printint node"<<endl;
    for(auto i:hdtonodemap)
    {
        cout<<i.second<<" ";
    }
}
int main()
{
    node *root = createtree();
    // cout << root->data;
    levelordertraversal(root);
    // vector<int>leftview;
    // int level=0;
    // leftviewprint(root,level,leftview);
    // //print
    // cout<<endl;
    // for(int i=0;i<leftview.size();i++)
    // {
    //     cout<<leftview[i]<<" ";
    // }
    // vector<int>rightview;
    // int level=0;
    // rightviewprint(root,level,rightview);
    // //print
    // cout<<endl;
    // for(int i=0;i<rightview.size();i++)
    // {
    //     cout<<rightview[i]<<" ";
    // }
    buttomviewprint(root);

}