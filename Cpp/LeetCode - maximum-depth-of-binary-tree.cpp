#include <vector>
class Solution {
public:
    vector<int> count;
    void leftNode(TreeNode *root,int *c){
       
        if(root->left){
            count.push_back(root->left->val);
            *c=*c+1;
            leftNode(root->left,c);
            *c=*c-1;
        }
        
        if(root->right){
            *c=*c+1;
            rightNode(root->right,c);
            *c=*c-1;
        }
    }
    void rightNode(TreeNode *root,int *c){
        if(root->right){
            *c=*c+1;
            rightNode(root->right,c);
            *c=*c-1;
        }
         if(root->left){
            *c=*c+1;
            leftNode(root->left,c);
        }
        
    }
    int maxDepth(TreeNode* root) {
        int c=0;
        leftNode(root,&c);
        rightNode(root,&c);
        return c;
    }
};
