
  struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    void left(vector<vector<int>>& a,TreeNode* root){
        vector<int> b;
        if(root->left&&root->right){
            b.push_back(root->left->val);
            b.push_back(root->right->val);
            a.push_back(b);
            left(a,root->left);
            right(a,root->right);
        }else if(root->left){
            b.push_back(root->left->val);
            a.push_back(b);
             left(a,root->left);
        } else if(root->right){
             b.push_back(root->right->val);
             a.push_back(b);
             right(a,root->right);
        }
    }
        void right(vector<vector<int>>& a,TreeNode* root){
        vector<int> b;
        if(root->left&&root->right){
            b.push_back(root->left->val);
            b.push_back(root->right->val);
            a.push_back(b);
            left(a,root->left);
             right(a,root->right);
        }else if(root->left){
            b.push_back(root->left->val);
            a.push_back(b);
            left(a,root->left);
        } else if(root->right){
             b.push_back(root->right->val);
             a.push_back(b);
             right(a,root->right);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        if(root){
            vector<int> b;
            b.push_back(root->val);
            a.push_back(b);
        } else return a;
        vector<int> c;
        if(root->left&&root->right){
            c.push_back(root->left->val);
            c.push_back(root->right->val);
            a.push_back(c);
            left(a,root->left);
            right(a,root->right);
        }
        else if(root->left){
             c.push_back(root->left->val);
            a.push_back(c);
            left(a,root->left);
        }
        else if(root->right){
             c.push_back(root->right->val);
            a.push_back(c);
            right(a,root->right);
        }
        for(int i=0;i<a.size();i++){
            if(a[i].size()==1){
                if(i+1<a.size()&&(i%2==0)&&(i!=0)){
                    if(a[i+1].size()==1){
                        a[i].push_back(a[i+1][0]);
                        a.erase(a.begin()+(i+1));
                    }
                }
            }
        }
        return a;
    }
};
