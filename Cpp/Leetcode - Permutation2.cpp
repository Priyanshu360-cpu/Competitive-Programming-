class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
            vector<int> pums=nums;
        vector<vector<int>> b;
        b.push_back(pums);
         next_permutation(pums.begin(),pums.end());
        while(pums!=nums){
            b.push_back(pums);
             next_permutation(pums.begin(),pums.end());
        }
        return b;
    }
};
