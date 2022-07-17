class Solution {
public:
    int jump(vector<int>& nums) {
      int p=1;
        if(nums[0]==0) return 0;
        if(nums.size()==1) return 0;
        int m=nums[0];
        for(int i=0;i<nums.size();){
            i=i+m;
vector<int>a;
                a.assign(nums.begin()+i-m+1,nums.begin()+i+1);
                sort(a.begin(),a.end());
               if(p==1)i=i-m+1;
               
               m=a[a.size()-1];
              
            p=p+1;
                
            }
        }
        return p;
        }
};
