class Solution {
public:
    void ans(TreeNode* root,int t,int c,int *p){
        if(*p==1)return ;
        if(!root->left&&!root->right){
            if(c==t){
                *p=1;
                return;
        }
      }
            if(root->left)ans(root->left,t,c+root->left->val,p);
            if(root->right)ans(root->right,t,c+root->right->val,p);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
                int p=0;
        if(!root)return false;
        else ans(root,targetSum,root->val,&p);
        return (p==1);
    }
};
