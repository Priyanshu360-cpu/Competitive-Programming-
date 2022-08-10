class Solution {
public:
   TreeNode* doit(int h,int l,vector<int>& nums){
       if(l>h)return NULL;
       int m=(l+h)/2;
       TreeNode* root=new TreeNode(nums[m]);
       root->left=doit(m-1,l,nums);
       root->right=doit(h,m+1,nums);
       return root;
   }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return doit(nums.size()-1,0,nums);
    }
};
