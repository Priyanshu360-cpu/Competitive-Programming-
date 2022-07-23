 #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
class Solution {
public:
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
     vector<int> countSmaller(vector<int>& nums) {
       ordered_set s;
        vector<int> a;
        for(int i=nums.size()-1;i>=0;i--){
            s.insert(nums[i]);
             a.push_back(s.order_of_key(nums[i]));
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
