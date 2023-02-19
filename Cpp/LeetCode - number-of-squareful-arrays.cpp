class Solution {
public:
map<vector<int>,bool> a;
map<vector<int>,bool> visited;
    int numSquarefulPerms(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        do{
          int h=0;
          for(int i=0;i<nums.size()-1;i++){
              int d=float(pow((nums[i]+nums[i+1]),0.5));
              if(pow(d,2)!=(nums[i]+nums[i+1])){
                  h=1;
                  break;
              }
          }
          if(h==0)a[nums]=true;
        }
        while(next_permutation(nums.begin(),nums.end()));
        return a.size();        
    }
};
