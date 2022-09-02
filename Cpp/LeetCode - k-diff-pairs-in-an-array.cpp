class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<pair<int,int>,int> a;
        int s=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]-nums[i]==k){
                    if(a[pair(nums[i],nums[j])]==0){
                        cout<<nums[i]<<nums[j]<<endl;
                        a[pair(nums[i],nums[j])]+=1;
                        s+=1;
                    }
                    else continue;
                }
                if(nums[j]-nums[i]>k)break;
            }
        }
        return s;
    }
};
