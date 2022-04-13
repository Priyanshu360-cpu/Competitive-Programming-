/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void ltree(TreeNode* root,int g){
        if(root==NULL) return;
        ltree(root->left,g); 
       ltree(root->right,g);
        if(root->val<g) g=root->val;
    }
     void rtree(TreeNode* root,int g){
        if(root==NULL) return;
        rtree(root->left,g); 
       rtree(root->right,g);
        if(root->val>g) g=root->val;
    }
    void recoverTree(TreeNode* root) {
        ltree(root->left,root->val);
        rtree(root->right,root->val);
        
    }
    
};
