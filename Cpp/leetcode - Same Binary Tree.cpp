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
    void tree(TreeNode*g,vector<int> &b){
     if(g==NULL){b.push_back(98765); return;}
     tree(g->left,b);
      
     tree(g->right,b);
        b.push_back(g->val);
 }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL) return true;
        if(p==NULL||q==NULL) return false;
        vector<int> c;
        vector<int> d;
        c.push_back(p->val);
         d.push_back(q->val);
        tree(p->left,c);
        tree(p->right,c);
        tree(q->left,d);
        tree(q->right,d);
        if(c==d)return true;
        else return false;
    }
    
};
 
