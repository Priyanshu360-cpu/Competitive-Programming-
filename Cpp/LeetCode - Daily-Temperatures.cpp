class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        map<pair<int,int>,int> k;
        for(int i=0;i<temperatures.size();i++){
            for(auto x:k){
                if(temperatures[i]>x.first.first){
                    ans[x.second]=i-x.second;
                    k.erase(x.first);
                  }
                }
                k[pair(temperatures[i],i)]=i;
        }
        return ans;
    }
};
