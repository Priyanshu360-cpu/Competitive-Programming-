class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        map<int,int> left;
        map<int,int> right;
        map<int,vector<int>> ans;
        for(auto x:nums)right[x]+=1;
        for(int i=0;i<=nums.size();i++){
            ans[left[0]+right[1]].push_back(i);
            if(!(i<nums.size()))break;
            left[nums[i]]+=1;
            right[nums[i]]-=1;
        }
        return ans.rbegin()->second;
    }
};
