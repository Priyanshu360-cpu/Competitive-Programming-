class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> a;
        vector<int>::iterator it;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                it = find (nums.begin(), nums.end(), (0-(nums[i]+nums[j])));
                if (it != nums.end()&&(it - nums.begin())!=i&&(it - nums.begin())!=j)
    {
                    vector<int> b;
                    b.push_back(nums[i]);
                    b.push_back(nums[j]);
                    b.push_back((0-(nums[i]+nums[j])));
                    sort(b.begin(),b.end());
                    int n=0;
                    for(int k=0;k<a.size();k++){
                        if(a[k]==b){
                            n=1;break;
                        }
                    }
                    if(n==0)
                    a.push_back(b);
                    else continue;
                }
            }
        }
        
        
        return a;
    }
};
