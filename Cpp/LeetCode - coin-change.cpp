class Solution {
public:
    int solve(vector<int>& dp,int n,vector<int> nums){
        if(n<=0) return 0;
      int sub=1e9;
        for(int i=0;i<nums.size();i++){
                int a=0;
             if(n-nums[i]>=0){
                  if(dp[n-nums[i]]!=-1)a=dp[n-nums[i]];
                 else
                 a = solve(dp,n-nums[i],nums);
                 if(a+1<sub)
                 sub=a+1;
            }
        }
      return dp[n]=sub;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        dp[0]=0;
         int x=solve(dp,amount,coins);
        return x==1e9?-1:x;
    }
};
