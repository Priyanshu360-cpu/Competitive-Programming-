class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                for(int j=i;j<nums.size()-1;j++){
                    nums[j]=nums[j+1];
                }
                nums.pop_back();
                i=-1;
            }
        }
        return nums.size();
    }
};
