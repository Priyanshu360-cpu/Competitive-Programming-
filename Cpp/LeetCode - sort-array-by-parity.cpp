class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)continue;
            else{
                int k=i;
                while(i<nums.size()){
                    if(nums[i]%2==0){
                        int m=nums[k];
                        nums[k]=nums[i];
                        nums[i]=m;
                    }
                    i++;
                }
                i=k;
            }
        }
        return nums;
    }
};
