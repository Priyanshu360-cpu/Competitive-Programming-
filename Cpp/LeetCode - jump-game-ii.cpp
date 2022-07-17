class Solution {
public:
    int jump(vector<int>& nums) {
      int p=1;
        if(nums[0]==0) return 0;
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size();i++){
  int m=nums[i];
            cout<<i<<endl;
            if(m+i<=nums.size()){
                              
vector<int>a;
                vector<int> b;
                a.assign(nums.begin()+i+1,nums.begin()+m+i+1);
                b=a;
                sort(a.begin(),a.end());
                vector<int>::iterator it;
                it=find(b.begin(),b.end(),a[a.size()-1]);
                
            i=i+a[a.size()-1]+(it-b.begin());
            p=p+1;
            }
        }
        return p;
        }
};
