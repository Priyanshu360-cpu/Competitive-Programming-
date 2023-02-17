class Solution {
public:
map<pair<int,int>,int> dp;
int numbers(int amount,int curr,int i,vector<int>& coins){
    if(curr==amount)return 1;
    if(curr>amount)return 0;
    int l=0;
    if(dp.find({(amount-curr),i})!=dp.end())return dp[{(amount-curr),i}];
    for(int j=i;j>=0;j--)
       l+=numbers(amount,curr+coins[j],j,coins);
     return dp[{amount-curr,i}]=l;
}
    int change(int amount, vector<int>& coins) {
        sort(coins.begin(),coins.end());
        return numbers(amount,0,coins.size()-1,coins);
    }
};
