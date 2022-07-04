class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> c;
        for(int i=0;i<nums.size()-k+1;i++){
            vector<int> g(nums.begin()+i,nums.begin()+k+i);
            sort(g.begin(),g.end());
            c.push_back(g[g.size()-1]);
        }
        return c;
    }
};
