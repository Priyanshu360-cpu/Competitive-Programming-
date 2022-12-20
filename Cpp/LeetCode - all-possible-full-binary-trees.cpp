class Solution {
public:
    vector<TreeNode*> solute(int n){
        vector<TreeNode*> a;
        if(n==1)a.push_back(new TreeNode());
        else if(n%2==0)return a;
        for(int i=0;i<n;i++){
            vector<TreeNode*> l=solute(i);
            vector<TreeNode*> r=solute(n-i-1);
            for(auto left:l){
                for(auto right:r){
                    TreeNode* node=new TreeNode();
                    node->left=left;
                    node->right=right;
                    a.push_back(node);
                }
            }
    }
        return a;
    }
            
    vector<TreeNode*> allPossibleFBT(int n) {
        return solute(n);
    }
};
