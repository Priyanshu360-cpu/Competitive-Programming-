class Solution {
public:
    int jump(vector<int>& nums) {
      int p=1;
        if(nums[0]==0) return 0;
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size();i++){
  int m=nums[i];
            if(m+i<nums.size()-1){
            sort(nums.begin()+i+1,nums.begin()+m+i+1);
            i=i+m;
            p=p+1;
            }
            }
        return p;
        }
};
