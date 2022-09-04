class Solution {
public:
    void solution(map<pair<int,int>,vector<int>>& b,int i,int j,TreeNode* root){
        if(!root)return;
        b[pair(i,j)].push_back(root->val);
        solution(b,i-1,j+1,root->left);
        solution(b,i+1,j+1,root->right);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
      vector<vector<int>> a;
       map<pair<int,int>,vector<int>> b;
        map<int,vector<int>> c;
        solution(b,0,0,root);
        for(auto x:b){
            sort(x.second.begin(),x.second.end());
            for(auto y:x.second)c[x.first.first].push_back(y);
    }
        for(auto x:c)a.push_back(x.second);
        return a;
    }
};
