class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
vector<int> m;
        int jo=2147483647;
        for(int i=0;i<nums.size();i++){
            if(jo==nums[i]) continue;
            else{jo=nums[i];m.push_back(nums[i]);}
        }
        nums=m;
        return m.size();
    }
};
