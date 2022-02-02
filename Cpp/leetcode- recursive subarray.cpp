class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int b=nums[0];
        int d=nums.size();
        int e=0;
      int s=0;
        for(int i=e;i<nums.size();i++){
            s=s+nums[i];
            b=b>s?b:s;
            if(i==(nums.size()-1)){
                e=e+1;
                s=0;
               i=e-1;
            }
        }
        return b;
    }
};
