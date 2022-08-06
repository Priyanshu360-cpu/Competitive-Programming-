class Solution {
public:
    void parse(TreeNode* root,vector<TreeNode*>& a){
        a.push_back(root);
        if(root->left)parse(root->left,a);
        if(root->right)parse(root->right,a);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> a;
        if(root)a.push_back(root);
        if(root->left)parse(root->left,a);
        if(root->right)parse(root->right,a);
        for(int i=1;i<a.size();i++){
            int k=a[i]->val;
            TreeNode* p=a[i];
            int j=i-1;
            while(j>=0&&(a[j]->val)>k){
                  a[j+1]=a[j];
                  j=j-1;
            }
            a[j+1]=p;
        }
        for(int i=0;i<a.size()-1;i++){
            a[i]->left=NULL;
            a[i]->right=a[i+1];
        }
        a[a.size()-1]->left=NULL;
        a[a.size()-1]->right=NULL;
        return a[0];
    }
};
