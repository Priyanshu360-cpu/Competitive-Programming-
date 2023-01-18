class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxe=INT_MIN,c=0,d=0,mine=INT_MAX;;
        int p=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            d=d+nums[i];
            c=c+nums[i];
            maxe=max(maxe,c);
            mine=min(mine,d);
            if(c<0)c=0;
            if(d>0)d=0;
                }
        return p==mine?maxe:max(maxe,p-mine);
    }
};
