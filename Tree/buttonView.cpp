         //button  view of a binary tree gfg ,as same as top view just if condition remove

vector <int> bottomView(Node *root) {
         map<int,int>m;
        vector<int>ans;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            pair<Node*,int>temp=q.front();
            q.pop();
            Node* front=temp.first;
            int hd=temp.second;
            //check in map if it is exist or not
                m[hd]=front->data;
            //insert
            if(front->left!=NULL)
            {
                q.push(make_pair(front->left,hd-1));
            }
            if(front->right!=NULL)
            {
                q.push(make_pair(front->right,hd+1));
            }
            
        }
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
    return ans;
    }