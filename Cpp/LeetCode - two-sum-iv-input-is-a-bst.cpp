// Two Pointer Approach
class Solution {
public:
    vector<int> a;
    void mapped(TreeNode* root,vector<int>& a){
        if(!root)return;
        a.push_back(root->val);
        mapped(root->left,a);
        mapped(root->right,a);
    }
    bool findTarget(TreeNode* root, int target) {
        mapped(root,a);
        sort(a.begin(),a.end());
        for(auto i=0;i<a.size();i++){
            for(auto j=a.size()-1;j!=i;j--){
                if(a[i]+a[j]==target)return true;
            }
        }
        return false;
    }
};

// Only with Hashmap solution
class Solution {
public:
    map<int,int> a;
    bool findTarget(TreeNode* root, int target) {
        if(!root)return false;
        if(a.find(target-root->val)!=a.end())return true;
        a[root->val]=1;
        return findTarget(root->left,target)||findTarget(root->right,target);
    }
};


