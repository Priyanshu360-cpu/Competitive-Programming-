class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                long long h=0;
                while(i<nums.size()&&nums[i]==0){
                    h+=1;
                    i++;
                }
                p+=(h*(h+1))/2;
         }
      }
        return p;
    }
};
