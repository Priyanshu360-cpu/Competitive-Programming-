class Solution {
public:
    int prefixsum(vector<int>& nums){
        vector<int>ps(nums.size(),0);
        int b=0;
            for(int i=0;i<nums.size();i++){
                b=b+nums[i];
                 ps[i]=b;
            }
             b=0;
            for(int i=0;i<ps.size()-1;i++){
                if(ps[i]==ps[ps.size()-1]-ps[i])b+=1;
            }
      return b;
    }
    int waysToPartition(vector<int>& nums, int k) {
       vector<vector<int>> a;
       for(int i=0;i<nums.size();i++){
     if(nums[i]==k)continue;
     else{
         int h=nums[i];
         nums[i]=k;
         a.push_back(nums);
         nums[i]=h;
     }      
       }
       int ps=prefixsum(nums);
       for(int i=0;i<a.size();i++){
           ps=max(ps,prefixsum(a[i]));
           }
       return ps;
    }
};
