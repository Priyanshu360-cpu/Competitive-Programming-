class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> a;
        int b;
        
        for(int i=0;i<nums.size();i++){
            b=nums[i];
            a.push_back(b);
            for(int j=i;j<nums.size();j++){
                if(j==i) continue;
                b=b+nums[j];
                a.push_back(b);
            }
}
         
        sort(a.begin(),a.end());
       
        return a[a.size()-1];
    }
};
