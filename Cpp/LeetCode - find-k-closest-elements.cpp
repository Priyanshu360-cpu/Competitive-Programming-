class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        map<int,vector<int>> a;
        for(auto i:arr){
            a[abs(i-x)].push_back(i);
        }
        vector<int> b;
        for(auto y:a){
            if (k==0) break;
            else if(y.second.size()<=k){
                for(auto z:y.second)b.push_back(z);
                k-=y.second.size();
            }
            else if(y.second.size()>k){
                for(int i=0;i<y.second.size();i++){
                    if(k==0)break;
                    k-=1;
                    b.push_back(y.second[i]);
                }
            }
        }
        sort(b.begin(),b.end());
        return b;
    }
};
