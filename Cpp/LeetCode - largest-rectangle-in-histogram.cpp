class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> a;
        int as;
        int ms=0;
        int i=0;
        while(i<heights.size()){
            if(a.empty()||heights[a.top()]<=heights[i]){
                a.push(i);
                i=i+1;
        }else{
                int t=a.top();
                a.pop();
                as=heights[t]*(a.empty()?i:i-a.top()-1);
                ms=ms>as?ms:as;
            }
        }
        while(!a.empty()){
             int t=a.top();
                a.pop();
                as=heights[t]*(a.empty()?i:i-a.top()-1);
                ms=ms>as?ms:as;
        }
        return ms;
    }
};
