//Kadane algorithm and Sliding window (TLE)

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxr=INT_MIN;
        deque<int> a;
        for(auto x:nums)a.push_back(x);
        for(int i=0;i<nums.size();i++){
            int d=a.front();
            a.pop_front();
            a.push_back(d);
            int maxe=INT_MIN,c=0;
        for(int i=0;i<a.size();i++){
            c=c+a[i];
            maxe=max(c,maxe);
            if(c<0)c=0;
         }
        maxr=max(maxe,maxr);
        }
        return maxr;
    }
};

// Kadane and reverse Kadane O(n)

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxe=INT_MIN,c=0,d=0,mine=INT_MAX;;
        int p=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            d=d+nums[i];
            c=c+nums[i];
            maxe=max(maxe,c);
            mine=min(mine,d);
            if(c<0)c=0;
            if(d>0)d=0;
                }
        return p==mine?maxe:max(maxe,p-mine);
    }
};
