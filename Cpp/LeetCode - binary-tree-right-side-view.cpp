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
    void right(TreeNode* root,vector<int>& a){
        a.push_back(root->val);
        if(root->right)right(root->right,a);
        else return;
    }
     void r2(TreeNode* root,vector<int>& a,int l,int* p){
        l=l+1;
         if(l>*p){
             *p=l;
             a.push_back(root->val);
         }
             if(root->right){
               r2(root->right,a,l,p);   
             }
             if(root->left)r2(root->left,a,l,p);
         
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> a;
        if(root)a.push_back(root->val);
        else return a;
        vector<int> b;
        if(root->left){
            right(root->left,b);
        }
        if(root->right){
            right(root->right,a);
        }
        int p=a.size()-1;
        if(root->right)
        r2(root->right,a,0,&p);
        if(root->left)
        r2(root->left,a,0,&p);
        return a;
    }
};
