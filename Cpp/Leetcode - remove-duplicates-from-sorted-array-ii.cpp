class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s=nums[0];
        int m=0;
        vector<int> finalo;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==s){
                m=m+1;
                if(m<=2){
                    finalo.push_back(nums[i]);
                }
}else{
                s=nums[i];
                m=1;
                finalo.push_back(nums[i]);
            }
        }
        nums=finalo;
        return finalo.size();
        
    }
};
