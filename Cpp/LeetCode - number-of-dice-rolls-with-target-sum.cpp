class Solution {
public:
    const int mod = 1000000007;
    long long solve(int n,int dice,int target,vector<vector<int>>& dp){
        if(dice==0&&target!=0)return 0;
        if(dice==0&&target==0)return 1;
        if(target<0)return 0;
        if(target==0&&dice!=0)return 0;
        if(dp[dice-1][target-1]!=-1)return dp[dice-1][target-1];
        long long ans=0;
        for(int i=1;i<=n;i++){
            ans=ans%mod+solve(n,dice-1,target-i,dp)%mod;
        }
        return dp[dice-1][target-1]=ans;
    }
    int numRollsToTarget(int dice, int k, int target) {
        vector<vector<int>> dp(dice,vector<int>(target+1,-1));
        return solve(k,dice,target,dp)%mod;
    }
};
