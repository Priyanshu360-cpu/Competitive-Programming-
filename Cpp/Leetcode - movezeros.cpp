class Solution {
public:
    void moveZeroes(vector<int>& nums) {
int n=nums.size();
        while(n){
       for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
               for(int j=i;j<nums.size()-1;j++) nums[j]=nums[j+1];
           nums.pop_back();
           nums.push_back(0);
           }
       } 
    n=n-1;}
    }
};
