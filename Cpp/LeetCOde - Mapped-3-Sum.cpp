class Solution {
public:
    map<int,int> a;
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> b;
        vector<vector<int>>::iterator it;
        for(auto x:nums)a[x]+=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=nums.size()-1;j!=i;j--){
                    a[nums[i]]-=1;
                    a[nums[j]]-=1;
                    if(a[0-(nums[i]+nums[j])]>0){
                        vector<int> c;
                        c.push_back(nums[i]);
                        c.push_back(nums[j]);
                        c.push_back(0-(nums[i]+nums[j]));
                        sort(c.begin(),c.end());
                        it=find(b.begin(),b.end(),c);
                        if(it==b.end())
                        b.push_back(c);
                    }
                    a[nums[i]]+=1;
                    a[nums[j]]+=1;
                }
            }
                return b;
        }
};
