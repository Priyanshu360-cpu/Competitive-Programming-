class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,vector<int>> a;
        for(int i=0;i<cards.size();i++)a[cards[i]].push_back(i);
        int min = INT_MAX;
        for(auto x:a){
            sort(x.second.begin(),x.second.end());
            for(int j=0;j<x.second.size()-1;j++){
                if(x.second[j+1]-x.second[j]<min)min=x.second[j+1]-x.second[j];
            }
        }
        return min==INT_MAX?-1:min+1;
    }
};
