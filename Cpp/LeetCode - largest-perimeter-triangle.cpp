class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>1;i--){
            int p=(nums[i]+nums[i-1]+nums[i-2])/2;
		// calculating semi perimeter
            if((nums[i]+nums[i-1]+nums[i-2])%2!=0)p+=1;
		// incrementing if it contains a decimal part
            if(p-nums[i]>0&&p-nums[i-1]>0&&p-nums[i-2]>0){
		// according to herons formula, if anyone of this become 0 or negative, area becomes zero or inexisting.
                return nums[i]+nums[i-1]+nums[i-2];
		// using greedy approach here
            }
        }
        return 0;
    }
};
