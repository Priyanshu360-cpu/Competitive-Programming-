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
#include <vector>
class Solution {
public:
    vector<int> count;
    void leftNode(TreeNode *root,int c){
                     count.push_back(c);   

        if(root->left){
            leftNode(root->left,c+1);
        }
        if(root->right){
            rightNode(root->right,c+1);
                         count.push_back(c);
        }
    }
    void rightNode(TreeNode *root,int c){
                     count.push_back(c);   

        if(root->right){
                         count.push_back(c);
            rightNode(root->right,c+1);
            
        }
         if(root->left){
            count.push_back(c);
            leftNode(root->left,c+1);
        }
        
    }
    int maxDepth(TreeNode* root) {
        int c=1;
        if (root==NULL) return 0;
        leftNode(root,c);
        rightNode(root,c);
        sort(count.begin(),count.end());
        return count[count.size()-1];
    }
};
