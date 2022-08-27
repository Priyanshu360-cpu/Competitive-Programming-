class Solution {
public:
    void dfs(map<int,int>& b,vector<int>& a,int i,vector<vector<int>> nums){
        for(auto x:nums[i]){
            if(b[x]!=1){
                b[x]=1;
                a.push_back(x);
                dfs(b,a,x,nums);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& nums) {
        vector<int> a;
        map<int,int> b;
        for(auto x:nums[0]){
            if(b[x]!=1){
                b[x]=1;
                a.push_back(x);
                dfs(b,a,x,nums);
            }
        }
        vector<int>::iterator it;
        for(int i=1;i<nums.size();i++){
            it=find(a.begin(),a.end(),i);
            if(it==a.end())return false;
        }
        return true;
    }
};
