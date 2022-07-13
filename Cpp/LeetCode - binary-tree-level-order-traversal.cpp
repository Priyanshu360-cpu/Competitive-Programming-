
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
    void left(vector<vector<int>>& a,TreeNode* root,int p){
        vector<int> b;
        if(root->left&&root->right){
            
            b.push_back(root->left->val);
            b.push_back(root->right->val);
            a.push_back(b);
            left(a,root->left,p);
            right(a,root->right,p);
        }else if(root->left){
            b.push_back(root->left->val);
            b.push_back(0);
             b.push_back(p);
            a.push_back(b);
             left(a,root->left,p);
                        p=p+1;

        } else if(root->right){
             b.push_back(root->right->val);
             b.push_back(0);
             b.push_back(p);
             a.push_back(b);
             right(a,root->right,p);
        }
    }
        void right(vector<vector<int>>& a,TreeNode* root,int p){
        vector<int> b;
        if(root->left&&root->right){
             
            b.push_back(root->left->val);
            b.push_back(root->right->val);
            a.push_back(b);
            left(a,root->left,p);
             right(a,root->right,p);
        }else if(root->left){
            b.push_back(root->left->val);
            b.push_back(0);
             b.push_back(p);
            a.push_back(b);
            left(a,root->left,p);
                        p=p+1;

        } else if(root->right){
             b.push_back(root->right->val);
             b.push_back(0);
             b.push_back(p);
             a.push_back(b);
             right(a,root->right,p);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        int p=1;
        if(root){
            vector<int> b;
            b.push_back(root->val);
            b.push_back(0);
            b.push_back(p);
            a.push_back(b);
        } else return a;
        p=p+1;
        vector<int> c;
        if(root->left&&root->right){
            c.push_back(root->left->val);
            c.push_back(root->right->val);
            a.push_back(c);
            left(a,root->left,p);
            right(a,root->right,p);
        }
        else if(root->left){
             
            c.push_back(root->left->val);
      
            a.push_back(c);
            left(a,root->left,p);
        }
        else if(root->right){
             c.push_back(root->right->val);
 
            a.push_back(c);
            right(a,root->right,p);
        }
        for(int i=0;i<a.size()-1;i++){
            if(a[i].size()==3&&a[i+1].size()==3){
            if(a[i][2]==a[i+1][2]){
                a[i].pop_back();
                a[i].pop_back();
                a[i].push_back(a[i+1][0]);
                a.erase(a.begin()+(i+1));
            }else{
                
                a[i].pop_back();
                a[i].pop_back();
            }
            
        }else if(a[i].size()==3){
                a[i].pop_back();
                 a[i].pop_back();
            }
        }
        if(a[a.size()-1].size()==3){
            a[a.size()-1].pop_back();
            a[a.size()-1].pop_back();
        }
        return a;
    }
};
