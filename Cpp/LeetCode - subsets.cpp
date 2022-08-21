class Solution {
public:
    void doit(vector<vector<int>>& subs,vector<int> a,int i,vector<int> nums,map<vector<int>,int>& b){
        for(int j=i;j<nums.size();j++){
            a.push_back(nums[j]);
            if(b[a]==1)continue;
            else b[a]=1;
            subs.push_back(a);
             doit(subs,a,j+1,nums,b);
            a.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        vector<int> a;
        map<vector<int>,int> b;
        subs.push_back(a);
        for(int i=0;i<nums.size();i++){
            a.push_back(nums[i]);
            b[a]=1;
            doit(subs,a,i+1,nums,b);
            subs.push_back(a);
            a.pop_back();
        }
        return subs;
    }
};
