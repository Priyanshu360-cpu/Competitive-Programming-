class Solution {
public:
    int maxer(map<pair<int,int>,int> a,int k,int i,int p,int n){
        if(k>n)return 0;
        int maxe=-1;
        for(auto x:a){
            if(x.first.first>=i){
 maxe=max(maxe,max(p,p+maxer(a,k+1,x.first.second,x.second,n)));
            }
        }
        return maxe;
    }
    int maxProfit(int k, vector<int>& prices) {
        map<pair<int,int>,int> a;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                a[{prices[i],prices[j]}]=prices[j]-prices[i];
            }
        }
        int maxe=-1;
        for(auto x:a){
            cout<<x.first.first<<" "<<x.first.second<<endl;
            maxe=max(maxe,maxer(a,0,x.first.second,x.second,k));
        }
        return maxe;
    }
};
