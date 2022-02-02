class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> b;
        int u=0;
        while(m){
            b.push_back(nums1[u]);
            u=u+1;
            m=m-1;
        }
        u=0;
         while(n){
            b.push_back(nums2[u]);
            u=u+1;
            n=n-1;
        }
        sort(b.begin(),b.end());
       nums1=b;
    }
};
