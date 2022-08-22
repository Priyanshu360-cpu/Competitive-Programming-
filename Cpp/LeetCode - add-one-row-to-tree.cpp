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
    void addrow(TreeNode* root,int k,int depth,int val){
        if(k==depth-1){
           TreeNode* neather=new TreeNode(val);
                neather->left=root->left;
                root->left=neather;
            TreeNode* neat=new TreeNode(val);
               neat->right=root->right;
               root->right=neat;
        }
        if(root->left)
        addrow(root->left,k+1,depth,val);
        if(root->right)
            addrow(root->right,k+1,depth,val);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(!root)return root;
           if(depth==1){
               TreeNode* getech=new TreeNode(val);
               getech->left=root;
               return getech;
           }
         addrow(root,1,depth,val);
        return root;
        
    }
};
