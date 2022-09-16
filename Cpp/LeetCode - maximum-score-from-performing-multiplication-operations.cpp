class Solution {
public:
    int n,q;
    int solution(vector<int>& nums,vector<int>& m,int s,int p,vector<vector<int>>& dp){
        if(p==q)return 0;
        if(dp[s][p]!=-976)return dp[s][p];
        dp[s][p]=max(solution(nums,m,s+1,p+1,dp)+nums[s]*m[p],solution(nums,m,s,p+1,dp)+nums[n-1-(p-s)]*m[p]);
         return dp[s][p];
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        n=nums.size();
        q=multipliers.size();
        vector<vector<int>> dp(q+1,vector<int>(q+1,-976));
      return solution(nums,multipliers,0,0,dp);  
    }
};
