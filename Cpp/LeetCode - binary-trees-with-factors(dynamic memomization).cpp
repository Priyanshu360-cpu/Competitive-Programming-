class Solution {
public:
    const int mod = 1e9+7;
    long long int recur(int n,vector<int> nums,map<int,long long int>& dp){
        if(dp.find(n)!=dp.end()) return dp[n];
        long long int a=1;
        for(int i=0;i<nums.size();i++){
            if(n%nums[i]==0){
            vector<int>::iterator it;
            it=find(nums.begin(),nums.end(),n/nums[i]);
                if(it!=nums.end())
             a=a%mod+(recur(n/nums[i],nums,dp)%mod)*(recur(nums[i],nums,dp)%mod);   
            }
        }
        return dp[n]=a%mod;
    }
    int numFactoredBinaryTrees(vector<int>& arr) {
      sort(arr.begin(),arr.end());
        map<int,long long int> dp;
        int x=0;
        for(int i=0;i<arr.size();i++){
            x=x%mod+recur(arr[i],arr,dp)%mod;
        }
        return x%mod;
    }
};
