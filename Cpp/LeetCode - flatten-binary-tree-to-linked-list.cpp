struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    void traverse(TreeNode* root){
        if(root->left){
            findright(root->left,root->right); 
            root->right=root->left;
        }
        root->left=NULL;
        if(root->right)traverse(root->right);
    }
    void findright(TreeNode* root,TreeNode* ned){
        if(root->right==NULL){
            root->right=ned;
            return;
        }else findright(root->right,ned);
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        if(root->left||root->right)traverse(root);
        else return;
    }
};
