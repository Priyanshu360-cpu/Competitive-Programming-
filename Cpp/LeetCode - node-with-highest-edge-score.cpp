class Solution {
public:
    int edgeScore(vector<int>& edges) {
        map<int,long> a;
        int l=a[0];
        for(int i=0;i<edges.size();i++){
            a[edges[i]]+=i;
        }
        long max=LONG_MIN;
        for(auto x:a){
            if(x.second>max){
                max=x.second;
                l=x.first;
            }
        }
        return l;
    }
};
