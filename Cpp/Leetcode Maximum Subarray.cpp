class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int b;
        int c=nums[0];
        for(int i=0;i<nums.size();i++){
            b=nums[i];
            c=c<b?b:c;
            for(int j=i;j<nums.size();j++){
                if(j==i) continue;
                b=b+nums[j];
                c=c<b?b:c;
            }
}  
        return c;
    }
};
