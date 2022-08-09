class Solution {
public:
    int recur(int n,vector<int> nums,vector<int>& dp){
        if(n==0) return 0;
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(n%nums[i]==0&&n!=nums[i]){
                int sub=0;
                if (dp[nums[i]/n]!=-1)a+=dp[nums[i]/n];
                else
             a+=recur(nums[i]/n,nums,dp)+1;   
            }
        }
        return dp[n]=a+1;
    }
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> dp(arr[arr.size()-1]+1,-1);
        for(int i=0;i<arr.size();i++){
            recur(arr[i],arr,dp);
        }
        int x=0;
        for(auto y:arr){
            x=x+dp[y];
        }
        return x;
    }
};
