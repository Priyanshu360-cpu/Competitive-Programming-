class Solution {
public:
    map<int,int> b;
    bool increasingTriplet(vector<int>& nums){
        map<pair<int,int>,vector<pair<int,int>>> a;
        for(auto x:nums){
            b[x]+=1;
        }
        if(b.size()<=2)return false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    a[{nums[i],i}].push_back({nums[j],j});
                    if(a.find({nums[j],j})!=a.end())return true;
                }
            }
        }
        for(auto x:a){
            for(auto y:x.second){
                if(a.find(y)!=a.end())return true;
            }
        }
        return false;
    }
};
