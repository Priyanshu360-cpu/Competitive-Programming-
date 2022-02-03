class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       while (nums2.size()){nums1.push_back(nums2[nums2.size()-1]); 
                            nums2.pop_back();}
        sort(nums1.begin(),nums1.end());
        double x = nums1.size()%2==0?((nums1[(nums1.size())/2]+nums1[((nums1.size()-1)/2)])/2.0):nums1[int((nums1.size())/2)];
    return x;
    }
};
