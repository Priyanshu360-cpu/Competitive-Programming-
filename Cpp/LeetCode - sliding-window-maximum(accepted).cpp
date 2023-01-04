/*
# Intuition
use a data structure which allows insertion and deletion from both end and a strcutre which keeps element in sorted format

# Approach
Deque could be used for storing the elements and map could be used for finding the max element.

# Code
```
*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> d;
        deque<int> c;//to store element
        map<int,int> h;//to keep track of max elements
        for(int i=0;i<k;i++){
            c.push_back(nums[i]);//initializing the deque
            h[nums[i]]+=1;//initial elements
        }
        d.push_back(h.rbegin()->first);
        while(k!=nums.size()){
            c.push_back(nums[k]);//adding elements in deque from back 
            h[nums[k]]+=1;//adding element in map
            int de=c.front();
            h[de]-=1;
            if(h[de]==0)h.erase(de);//checking for existence of prvs elements
            c.pop_front();
            d.push_back(h.rbegin()->first);//updating maximum window
            k+=1;
        }
        return d;
    }
};
```
