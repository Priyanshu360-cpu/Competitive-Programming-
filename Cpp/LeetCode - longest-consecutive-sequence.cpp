class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        vector<int> diff;
        vector<int> unique;
        diff.push_back(1);
        int c=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
             int l=0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==nums[i]){
                    i=j; l==3;continue;
                }
                if(nums[j]==nums[i]+1){
                    l=1;break;
                }
                  if(nums[j]>nums[i])break;}
            if(l==1){
                c=c+1;
            }else if(l==3) continue; else{
                diff.push_back(c);
                c=1;
            }
        }
        diff.push_back(c);
        sort(diff.begin(),diff.end());
        return diff[diff.size()-1];
    }
};
