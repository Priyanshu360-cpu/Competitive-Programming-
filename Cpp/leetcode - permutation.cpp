class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> r;
        vector<int> v=nums;
        int q=nums.size();
        int f=1;
        while(q){
            f=f*q;
            q=q-1;
        }
        for(int i=0;i<f;i++){
        int a;
        vector<int> p;
        p.push_back(nums[nums.size()-1]);
        nums.pop_back();
        int g=nums.size();
        for(int j=0;j<g;j++){
             p.push_back(nums[j]);
        }
        for(int k=0;k<r.size();k++){
            if(r[k] == p){
                int l=p[0];
                p[0]=p[p.size()-1];
                p[p.size()-1]=l;
            }
             if(r[k]==p) continue;
        }   
        r.push_back(p);
            nums=p;
        }
        return r;
    }
};
