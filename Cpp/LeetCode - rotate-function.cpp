class Solution {
public:
    void rotate(vector<int>& nums){
        int k=nums[0];
        int l=nums[nums.size()-1];
        for(int i=0;i<nums.size()-1;i++){
            int g=nums[i+1];
            nums[i+1]=k;
            k=g;
        }
        nums[0]=l;
    }
    int maxRotateFunction(vector<int>& nums) {
        int m=0;
        for(int i=0;i<=nums.size();i++){
            rotate(nums);
            int s=0;
            for(int j=0;j<nums.size();j++){
                s=s+(j*nums[j]);
            }
            if(m==0)m=s;
            else if(s>m)m=s;
        }
        return m;
    }
};
