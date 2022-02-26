class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a;
        int start =-1;
        int end=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(start==-1){
                    start=i;
                    continue;
                }else{
                    end=i;
                }
            }else if(start!=-1) break;
        }
        if(start!=-1&&end==-1)end=start;
        a.push_back(start);
        a.push_back(end);
        return a;
    }
};
