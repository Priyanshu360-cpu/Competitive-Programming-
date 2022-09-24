class Solution {
public:
    void solution(vector<vector<int>>& a,vector<int>& b,int s,TreeNode* root,int c){
        if(!root)return;
        b.push_back(root->val);
        if(c+root->val==s&&!root->left&&!root->right){
            a.push_back(b);
        }
        solution(a,b,s,root->left,c+root->val);
        solution(a,b,s,root->right,c+root->val);
        b.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int s) {
        vector<vector<int>> a;
        vector<int> b;
        solution(a,b,s,root,0);
        return a;
    }
};
