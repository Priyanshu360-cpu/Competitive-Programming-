struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
class Solution {
public:
    void finder(TreeNode* root,TreeNode* p,TreeNode* q,map<int,TreeNode*>& m){
        int g=0;
        if(root==p||root==q) g=g+1;
           if(root->left)findr(root->left,p,q,&g);
           if(root->right)findr(root->right,p,q,&g);
        if(g==2){
            m[0]=root;
            if(root->left)finder(root->left,p,q,m);
            if(root->right)finder(root->right,p,q,m);
        }
    }
    void findr(TreeNode* root,TreeNode* p,TreeNode* q,int* g){
        if(root==p||root==q)*g=*g+1;
        if(*g==2) return;
        if(root->left)findr(root->left,p,q,g);
        if(root->right)findr(root->right,p,q,g);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        map<int,TreeNode*> s;
        s.insert(pair<int,TreeNode*>(0,NULL));
        if(root->right)finder(root,p,q,s);
        if(root->left)finder(root,p,q,s);
        return s[0];
    }
};
