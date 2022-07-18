class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(nums[i]<=0&&i<nums.size()-1){
            i=i+1;
        }
        if(nums[i]!=1) return 1;
        else{
            while(i+1<nums.size()){
                if(nums[i]+1!=nums[i+1]&&nums[i]!=nums[i+1]) return nums[i]+1;
                i=i+1;
            }
        }
        return nums[i]+1;
    }
};
