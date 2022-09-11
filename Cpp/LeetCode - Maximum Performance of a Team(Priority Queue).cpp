class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
   priority_queue<int, vector<int>,greater<int>> g;
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++)a.push_back(pair(efficiency[i],speed[i]));
        sort(a.rbegin(),a.rend());
        long ts=0;
        long maxer=0;
        for(int i=0;i<n;i++){
            if(g.size()==k){
                ts-=g.top();
                g.pop();
            }
            g.push(a[i].second);
            ts+=a[i].second;
            maxer=maxer>ts*a[i].first?maxer:ts*a[i].first;
        }
        return maxer%((int)1e9 + 7);
    }
};
