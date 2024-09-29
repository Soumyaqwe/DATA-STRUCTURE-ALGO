    //RIGHT VIEW OF A BINARY TREE ........gfg & leetcode

void solve(Node* root,int level,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(level==ans.size())
        {
            ans.push_back(root->data);
        }
        solve(root->right,level+1,ans);
        solve(root->left,level+1,ans);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       int level=0;
       vector<int>ans;
       solve(root,level,ans);
       return ans;
    }