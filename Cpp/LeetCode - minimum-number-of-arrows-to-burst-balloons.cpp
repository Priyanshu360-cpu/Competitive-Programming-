/*
# Intuition
Burst the ballons which have same intervals,sorting them first could be an option
# Approach
Sort the vector first then keep looking for upper bounds(element in the 1rst index)

# Code
```
*/
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int p=0;//arrows
        for(int i=0;i<points.size();i++){
            int z=i,l=i;
            while(i!=points.size()){
                if(points[i][1]<points[z][1])z=i;//change the upper bound to minimum of them
                if(points[z][1]>=points[i][0]&&points[z][1]<=points[i][1])i++;//checking for intervals
                else break;
            }
            if(i!=l)i-=1;//if none of the option satisfied we need to fall back
            p+=1;.//increment the arrows
        }
        return p;
    }
};
```
