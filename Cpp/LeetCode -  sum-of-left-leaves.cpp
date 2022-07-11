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
    void left(TreeNode* root,int* p){
        
        if(root->left){
            left(root->left,p);
        }
        if(root->right){
            right(root->right,p);
        }
        if(!(root->left)&&!(root->right))*p=*p+root->val;
    }
    void right(TreeNode* root,int* p){
         if(root->left){
            left(root->left,p);
        }
        if(root->right){
            right(root->right,p);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int p=0;
        if(root->left)left(root->left,&p);
        if(root->right)right(root->right,&p);
        return p;
    }
};
