class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        vector<int>tr=nums;
        int z=nums.size();
         sort(tr.begin(), tr.end(), greater<int>());
        if(tr[0]!=0){
       for(int i=0;i<z;i++){
           if(nums[i]==0){
               for(int j=i;j<z-1;j++) nums[j]=nums[j+1];
               i=i-1;
           c=c+1;
           }
       }
        for(int i=0;i<c;i++){
            nums.pop_back();
        }
         for(int i=0;i<c;i++){
            nums.push_back(0);
        }
    }
    }
};
