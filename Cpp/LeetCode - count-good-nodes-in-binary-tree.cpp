class Solution {
public:
    int dfs(TreeNode* root,int x){
        if(!root)return 0;
        int l=0;
        if(root->val>=x){
            x=root->val;
            l=1;
        }
        return l+dfs(root->left,x)+dfs(root->right,x);
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};
