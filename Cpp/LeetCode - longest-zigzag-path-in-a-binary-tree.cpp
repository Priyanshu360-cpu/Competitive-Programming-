class Solution {
public:
int rightzag(TreeNode* root,int p){
    if(root==NULL) return p-1;
    return max(leftzag(root->left,p+1),rightzag(root->right,1));
}
int leftzag(TreeNode* root,int p){
    if(root==NULL)return p-1;
    return max(rightzag(root->right,p+1),leftzag(root->left,1));
}
    int longestZigZag(TreeNode* root) {
        return max(rightzag(root,0),leftzag(root,0));
    }
};
