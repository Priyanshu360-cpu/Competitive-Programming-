class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        vector<int> a(heights.size(),0);
        for(int i=1;i<heights.size();i++){
            if(heights[i]>heights[i-1]){
                a[i-1]+=1;
                continue;
            }
            int max=heights[i];
            a[i-1]+=1;
            for(int j=i+1;j<heights.size();j++){
                if(heights[j]>heights[i-1]){
                    a[i-1]+=1;
                    break;
                }
            if(heights[j]>=max){
                max=heights[j];
                a[i-1]+=1;
            }
                else continue;
            }
        }
        return a;
    }
};
