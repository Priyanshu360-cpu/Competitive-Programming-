class Solution {
public:
    void search(TreeNode* node, TreeNode* p, TreeNode* q,int a,int* m,vector<TreeNode*>& e){
        int r=0,s=0;
        dfs(node,&r,&s,p,q);
        if(r==1&&s==1){
            if(a>*m){
                *m=a;
                e[0]=node;
            }
        }
        if(node->left) search(node->left,p,q,a+1,m,e);
        if(node->right) search(node->right,p,q,a+1,m,e);
    }
    void dfs(TreeNode* node,int* i,int* s,TreeNode* p,TreeNode* q){
        if(*i==1&&*s==1)return;
        if(node==p){
            *i=1;
        }else if(node==q){
            *s=1;
        }
        if(node->left)dfs(node->left,i,s,p,q);
        if(node->right)dfs(node->right,i,s,p,q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> a(1,NULL);
        int m=0;
         search(root,p,q,1,&m,a);
        return a[0];
        
    }
};
