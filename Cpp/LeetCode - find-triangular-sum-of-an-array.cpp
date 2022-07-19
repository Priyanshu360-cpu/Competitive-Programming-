class Solution {
public:
    void finale(vector<int>& a){
     vector<int> b;
        for(int i=0;i<a.size()-1;i++){
            b.push_back((a[i]+a[i+1])%10);
        }        
        a=b;
        if(a.size()==1) return;
            finale(a);
    }
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1) return nums[0]%10;
        finale(nums);
        return nums[0];
    }
};
