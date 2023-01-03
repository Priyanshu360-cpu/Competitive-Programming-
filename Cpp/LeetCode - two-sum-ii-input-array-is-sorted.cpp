class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> a;
        for(int i=0;i<numbers.size();i++){
            if(i>0&&numbers[i-1]==numbers[i])continue;
        for(int j=i+1;j<numbers.size();j++){
            if(numbers[i]+numbers[j]>target)break;
            else if(numbers[i]+numbers[j]==target){
                a.push_back(i+1);
                a.push_back(j+1);
                return a;
            }
        }
        }
        return a;
    }
};
