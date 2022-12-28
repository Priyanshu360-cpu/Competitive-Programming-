/*
# Intuition
The pile with most content should be reduced

# Approach
Use a Maximum Priority queue to get the maximum element always on the top. remove the top element on every iteration and push the new result.

# Code
*/
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> a;
        for(auto x:piles)a.push(x);
        while(k--){
            a.push(a.top()-floor(a.top()/2));
            a.pop();
        }
        int s=0;
        while(!a.empty()){
            s+=a.top();
            a.pop();
        }
        return s;
    }
};
