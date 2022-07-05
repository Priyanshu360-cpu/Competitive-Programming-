class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        
        vector<int> diff;
        vector<int> unique;
        diff.push_back(1);
        int c=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int l=0;
for(int j=0;j<unique.size();j++){
    if(unique[j]==nums[i]){
    l=1;
    break;
}}
    if(l==0){
      unique.push_back(nums[i]);
            }
        }
  
        for(int i=0;i<unique.size()-1;i++){
            if(unique[i+1]-unique[i]==1) {
                c=c+1;
               }
            else{
                diff.push_back(c);
                c=1;
            }
        }
        diff.push_back(c);
        sort(diff.begin(),diff.end());
        return diff[diff.size()-1];
    }
};
