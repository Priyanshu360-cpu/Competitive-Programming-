class Solution {
public:
    map<int,int> a;
    void mapped(TreeNode* root,map<int,int>& a){
        if(!root)return;
        a[root->val]=1;
        mapped(root->left,a);
        mapped(root->right,a);
    }
    bool findTarget(TreeNode* root, int target) {
        mapped(root,a);
        for(auto i=a.begin();i!=a.end();i++){
            for(auto j=a.rbegin();j->first!=i->first;j++){
                if(i->first+j->first==target)return true;
            }
        }
        return false;
    }
};
