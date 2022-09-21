// Fastest way
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> q;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)sum+=nums[i];
        }
        for(auto x:queries){
            if(x[1]>=0&&x[1]<nums.size()){
                int l=nums[x[1]];
                if(abs(nums[x[1]])%2==0)sum-=nums[x[1]];
                nums[x[1]]+=x[0];
                if(abs(nums[x[1]])%2==0){                                       
                    sum+=nums[x[1]];
                }
            }
         
            q.push_back(sum);
        }
        return q;
    }
};

// Using Map

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> q;
        map<int,int> c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)c[i]=nums[i];
        }
        for(auto x:queries){
            if(x[1]>=0&&x[1]<nums.size()){
                nums[x[1]]+=x[0];
                if(abs(nums[x[1]])%2==0){
                    c[x[1]]=nums[x[1]];
                }else{
                    c.erase(x[1]);
                }
            }
         int sum=0;
        for(auto x:c){
            if(abs(x.second)%2==0)sum+=x.second;
        }
            q.push_back(sum);
        }
        return q;
    }
};
