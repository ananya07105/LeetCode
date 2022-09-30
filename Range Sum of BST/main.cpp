class Solution {
public:
        int sum=0;

    int rangeSumBST(TreeNode* root, int low, int high) {
        solver(root,low,high);
        return sum;
    }
    void solver(TreeNode* root, int low, int high)
    {
        if(root==NULL)
          return;
        if(low<=root->val && root->val<=high)
        {
            sum+=root->val;
        }
        solver(root->left, low,high);
        solver(root->right,low,high);
    }
};
C
