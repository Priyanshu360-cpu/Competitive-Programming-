class Solution {
public:
    void solution(TreeNode* root,map<TreeNode*,int>& dp){
        if(!root)return;
        if(root->left){
        if(dp[root->left]==0){
            int z = dfs(root->left,dp);
            if(!z)root->left=NULL;
        }
         if(root->left)solution(root->left,dp);
        }
        if(root->right){
            if(dp[root->right]==0){
            int p = dfs(root->right,dp);
            if(!p)root->right=NULL;
        }
            if(root->right)solution(root->right,dp);
        }
    }
    int dfs(TreeNode* root,map<TreeNode*,int>& dp){
        if(!root) return 0;
        if(root->val==1){
            dp[root]=1;
            return 1;
        }
        int z=dfs(root->left,dp)||dfs(root->right,dp);
        dp[root]=z;
        return dp[root];
}
    TreeNode* pruneTree(TreeNode* root) {
        map<TreeNode*,int> dp;
        solution(root,dp);
        if(!(root->left||root->right)&&root->val!=1) return NULL;
        return root;
    }
};
