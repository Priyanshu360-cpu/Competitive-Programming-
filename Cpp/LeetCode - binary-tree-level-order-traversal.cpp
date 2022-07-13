
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
    void left(TreeNode* root,vector<vector<int>>& a,int p){
        if(a.size()>=p){
            a[p-1].push_back(root->val);

        }else{
            vector<int> b;
            b.push_back(root->val);
            a.push_back(b);
        }
        if(root->left)left(root->left,a,p+1);
        if(root->right)right(root->right,a,p+1);
    }
     void right(TreeNode* root,vector<vector<int>>& a,int p){

        if(a.size()>=p){
            a[p-1].push_back(root->val);
        }else{
            vector<int> b;
            b.push_back(root->val);
            a.push_back(b);
        }
        if(root->left)left(root->left,a,p+1);
        if(root->right)right(root->right,a,p+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>a;
        int p=2;
        if(root){
            vector<int> b;
            b.push_back(root->val);
            a.push_back(b);}
        else return a;
        if(root->left){
            left(root->left,a,p);
        }
        if(root->right){
            right(root->right,a,p);
        }
        
        return a;
    }
};
