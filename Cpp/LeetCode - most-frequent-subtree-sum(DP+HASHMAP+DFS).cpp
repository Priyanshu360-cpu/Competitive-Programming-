class Solution {
public:
    void dfs(TreeNode* root,map<int,int>& a,map<TreeNode*,int>& b){
        if(!root)return;
        a[solution(root,b)]+=1;
        dfs(root->left,a,b);
        dfs(root->right,a,b);
    }
    int solution(TreeNode* root,map<TreeNode*,int>& b){
        if(!root)return 0;
        if(b[root])return b[root];
        int x=root->val+solution(root->left,b)+solution(root->right,b);
        return b[root]=x;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        map<int,int> a;
        map<TreeNode*,int> b;
        dfs(root,a,b);
        int max=INT_MIN;
        vector<int> c;
        for(auto x:a)if(x.second>max)max=x.second;
        for(auto x:a)if(x.second==max)c.push_back(x.first);
        return c;
    }
};
