class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return{};
        vector<int> v;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            int size = Q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* t = Q.front();
                Q.pop();
                if(i==size-1)
                    v.push_back(t->val);
                if(t->left)
                    Q.push(t->left);
                if(t->right)
                    Q.push(t->right);
            }
        }
        return v;
    }
    
};
