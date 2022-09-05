
class Solution {
public:
    void solution(Node* root,map<int,vector<int>>& a,int i){
        if(!root) return;
        a[i].push_back(root->val);
        for(auto x:root->children)solution(x,a,i+1);
    }
    vector<vector<int>> levelOrder(Node* root) {
        map<int,vector<int>> b;
        vector<vector<int>> a;
        solution(root,b,0);
        for(auto x: b)a.push_back(x.second);
        return a;
    }
};
