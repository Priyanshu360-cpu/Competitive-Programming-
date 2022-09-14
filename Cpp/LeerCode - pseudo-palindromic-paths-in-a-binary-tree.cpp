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
    void solution(map<int,int> c,int *p,TreeNode* root){
        if(!root->left&&!root->right){
            c[root->val]+=1;
            int z=0;
            for(auto x:c){
                if (x.second%2!=0)z+=1;
            }
            if(z>1)
            return;
            else{
                *p=*p+1;
                return;
            }
        }
        c[root->val]+=1;
        if(root->left)
        solution(c,p,root->left);
        if(root->right)
        solution(c,p,root->right);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        map<int,int> c;
        int p=0;
        solution(c,&p,root);
        return p;
    }
};
