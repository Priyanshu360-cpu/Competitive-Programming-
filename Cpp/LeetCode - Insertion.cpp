class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=2147483647;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return i;
            else if(nums[i]>=target){
                l=i;
                break;
            }
        }
        if(l==2147483647)return nums.size();
        else return l;
    }
};
