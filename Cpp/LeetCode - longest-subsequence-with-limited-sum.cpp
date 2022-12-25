class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
       vector<int> b;
       map<pair<int,int>,int> a;
       for(int i=0;i<nums.size();i++){
           a[{nums[i],i}]=1;
       }
       for(auto x:queries){
           int total=0;
           int p=0;
           for(auto y:a){
            total+=y.first.first;
            if(total<=x){
                   p+=1;
               }else break;
           }
           b.push_back(p);
       }
       return b;
    }
};
