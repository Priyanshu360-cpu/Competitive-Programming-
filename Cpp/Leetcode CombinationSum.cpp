class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> b;
         
        for(int i=0;i<candidates.size();i++){
        vector<int> a;
            a.push_back(candidates[i]);
            combination(a,i+1,candidates.size(),candidates,b,target);
        }
       
        return b;
    }
    void combination(vector<int> &checker,int g,int l, vector<int>& candidates,vector<vector<int>>& b,int target){
            if(g>l) return;
            int s=0;
            for(int k=0;k<checker.size();k++){
                 s=s+checker[k];
            }
            if(s==target){
                b.push_back(checker);
                return;
            }
            if(s+checker[checker.size()-1]>target){
                if(s+candidates[g]>target) return;
                else {
                    checker.push_back(candidates[g]);
                    combination(checker,g+1,l,candidates,b,target);}
            }
        }
};
