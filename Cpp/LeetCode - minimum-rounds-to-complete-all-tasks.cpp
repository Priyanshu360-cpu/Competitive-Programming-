class Solution {
public:
 map<int,int> dp;
 int divider(int x){
     if(dp.find(x)!=dp.end())return dp[x];
     if(x==0)return 1;
     if(x<0)return INT_MAX-1;
     return dp[x]=1+min(divider(x-3),divider(x-2));
 }
    int minimumRounds(vector<int>& tasks) {
        map<int,int> a;
        for(auto x:tasks){
            a[x]+=1;
        }
        int l=0;
        for(auto x:a){
            if(x.second==1)return -1;
            if(dp.find(x.second)!=dp.end()){
                l+=dp[x.second]-1;
                continue;
            }
            int s=divider(x.second);
            if(s==INT_MAX)return -1;
            l+=s-1;
        }
        return l;
    }
};
